/**
 * @file main.cpp
 * @author PH03be (phoebeleong8@gmail.com)
 * @brief A simple mystery game involving a cute neko girl called Samantha
 * @version 0.1
 * @date 11-03-21
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ofstream file;

void nekoGirl () {
    cout << "\nYou open the box and a cute fluffy neko girl jumps out!\n";
    cout << "She says that she was kidnapped and put into a box to kill you.\n";
    cout << "But she doesn't like to kill people, so she decided to help you instead.\n";
    cout << "She says her name is Samantha.\n\n";
    cout << "According to Samantha, the criminals in question live at 420 Rose St.\n\n";

    cout << "So the next day you and the other officers go to 420 Rose St to arrest the criminals.\n";
    cout << "They allow themselves to be arrested, which suprises all the officers until they say that they got tricked into being part of this by a couple of powerful drug lords in London.\n";
    cout << "So you contact the UK Police, and arrange to meet up.\n";
    cout << "In your apartment in London, you find a notebook page on the floor.\n";
    cout << "Press enter to continue.\n";
    cin.get();

    file.open("notebook-page.txt");
    file << "69 Faith St Piccadilly Sq";
    file.close();

    cout << "\nOpen 'notebook-page.txt'\n\n";
    cout << "Press enter to continue.\n";
    cin.get();

    int addressChoice;
    cout << "Go to the address on the note [1] or Don't go to the address [2]\n";
    cin >> addressChoice;

    switch (addressChoice) {
        case 1:
        cout << "\nYou and Samantha arrive at the house.\n";
        cout << "It seems disused, like someone's trying to waste their time.\n\n";
        cout << "Then you spot two people in a window of the house, moving around.\n";
        cout << "Samantha knocks on the door of the house, waits for ten minutes then breaks a window and climbs through. You follow.\n";
        cout << "As you walk down the hallway, you notice racks of weapons and explosives.\n";
        cout << "But why would a group in London try to kill a policeman on the other side of the world?\n";
        cout << "'This is stupid.' You hear Samantha say.";
        cout << "'How so?' You ask.\n";
        cout << "'One attempt on a police officers life resulting in a trip around the world for no reason? It's not even connected to anything.'\n";
        cout << "Stop the investigation [1] or Let it continue [2]\n";
        int investigationChoice;
        cin >> investigationChoice;

        switch (investigationChoice) {
            case 1:
            cout << "\n\nYou decide to stop the investigation, and you live with Samantha for the rest of your life.\n\n";

            cin.get();
            cin.ignore();
            break;
            case 2:
            cout << "\n\nThe investigation continues for a while, until the police force eventually admit defeat and end it.\n\n";
            cin.get();
            cin.ignore();
        }
        break;
        case 2:
        cout << "You and Samantha both agree to not go to the address, and she ends the investigation.\n\n";
        break;
    }
}

int main () {

    cout << "\n\nYou are a policeman, and one day you find a bomb at your house.\n";
    cout << "Quickly, you throw it into a lake before it explodes...\n";
    cout << "That afternoon, you walk into the police building to report suspected attempted murder on a police officer.\n";
    cout << "Almost immediately, you and the rest of the police force start work on the case.\n\n";
    cout << "Press enter to continue.\n";
    cin.get();

    cout << "The Next Day...\n";
    cout << "You wake up, and go check your letters just like you would on a normal morning.\n";
    cout << "In your letter box, you find an unmarked envelope. You take it back down to your house with the rest of the letters.\n\n";
    cout << "Press enter to continue.\n";
    cin.get();

        file.open("letter.txt");
    file << "Dear Officer.\n\n";
    file << " I heard in the news that someone planted a bomb on your doorstep.\n I am extremely glad that you are ok, and hope that you find a way to avoid those types of situations in the future.\n";
    file << " I am contacting you because I heard two people talking about bombing police officers in The Bee & The Bartender down the road.\n I heard all of this last week, but I was extremely busy at the time and couldn't afford to go to the police about it.\n";
    file << " Either way, I wish you good luck on your investigation.\n\n";
    file << " Sincerely,\n";
    file << " Andrew";
    file.close();

    cout << "Please open 'letter.txt', which will be located in the folder that you are running this program from.\n\n";
    cout << "Press enter to continue.\n";
    cin.get();

    cout << "A Week Into The Investigation...\n";
    cout << "With the knowledge of what Andrew had overheard in The Bee & The Bartender, the two main investigators had interviewed a few employees who were there.\n";
    cout << "They said they recalled some people coming up to them and telling them about the talking, but simply couldn't take it seriously enough to report it.\n";
    cout << "One of them said that the people who were talking were wearing all blue clothes at the time.\n\n";
    cout << "Press enter to continue.\n";
    cin.get();
    cout << "Back at the police station, an officer said that there was a football match happening later this week. They thought that that could've been a possible motive for wearing the blue clothes.\n";
    cout << "But it turned out that no team in the match sported blue anyway.\n\n";
    cout << "Press enter to continue.\n";
    cin.get();

    cout << "The next day, the police officers recovered the bomb, which had been defused by the water, and checked it for fingerprints.\n";
    cout << "Throughout the next week, the officers found out that one of the last people to touch it was a man named Xavier.\n";
    cout << "They promptly went to Xavier's house and arrested him.\n\n";
    cout << "Press enter to continue.\n";
    cin.get();

    cout << "The next day, you find a parcel at your door. You're not sure if you should open it, as it could be another attempt on your life.\n";
    cout << "Open it [1] or Don't open it [2]\n";
    int parcelChoice;
    cin >> parcelChoice;

    switch (parcelChoice) {
        case 1:
        nekoGirl();
        break;
        case 2:
        cout << "You decide to leave the box where it is, and head inside to your house.\n";
        cout << "Soon after you've closed the door and sat down, you hear a knock.\n";
        cout << "You open the door, and get stabbed in the face with a knife.\n";
        cout << "You Died\n";
    }
}