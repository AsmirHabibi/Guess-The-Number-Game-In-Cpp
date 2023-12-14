#include <iostream>
#include <unistd.h>
#include <random>
#include <sstream>

#include "Hard_Mode.hpp"

using namespace std;


bool Hard_Mode::isInteger(int Interger){
     // Since the input is already an int, it is always considered an integer.
    return true;
}

void Hard_Mode::HGreet(){
    system("cls");
    cout << "Welcome To Hard Level!!" << endl;
    sleep(1);
    cout << "This is not an easy one." << endl;
    sleep(1);
    cout << "You will have '10' attempts to guesss the number between 1 to 25." << endl;
    sleep(1);
    cout << "Good Luck." << endl;
    cout << "you will need it." << endl;
    system("cls");
}
void Hard_Mode::HSystem(){

 // Use a random_device to seed the random number generator
    std::random_device rddd;

    // Use the Mersenne Twister engine for randomness
    std::mt19937 gen(rddd());

    // Define the distribution for the range [1, 25]
    std::uniform_int_distribution<int> distribution(1, 25);

    // Generate a random number using the distribution and the generator
    int randomNumH = distribution(gen);

    cout << "Declaring a Random Number.." << endl;
    sleep(2);
    cout << "Number Declared." << endl;
    system("cls");
    cout << "Enter You guess." << endl;
    Htries = 0;
    cin >> Hinput;

    for (;;)
    {
    if (isInteger(Hinput))
    {
        break;
    } else {
        cout << "Invalid Input, Try Writing whole numbers." << endl;
    }
    }

    for (int i = 0; i < 10; i++)
    {
        if (Hinput == randomNumH &&  Htries != 10)
        {
            Htries++;
            cout << "Congrats! You guessed the number " << randomNumH << " in " << Htries << " tries."<< endl;
            break;
        } else if (Hinput != randomNumH &&  Htries != 10)
        {
            Htries++;

            cout << "Wrong Guess, Try Again." << "Attempts Left: " << 10 - Htries << "/10"<<endl;
            cin >> Hinput;
        }
    }

    if (Hinput != randomNumH && Htries == 10)
    {
        cout << "Aw shucks, it looks like you lost." << endl;
            sleep(1);
            cout << "Wanna Try Again?" << endl;
            cout << "Enter 'r' to try again or Enter 'e' to Exit the Game." << endl;
            cin >> hyn;

            while (hyn != 'r' && hyn != 'e') {
                cout << "I said, 'r' or 'e'..." << endl;
                cin >> hyn;
            }

            if (hyn == 'r') {
                system("cls");
                HGreet();
                HSystem();
            } else if (hyn == 'e') {
                cout << "See you Again." << endl;
                sleep(2);
                exit(0);
            }
    }

    sleep(2);
        cout << "So.." << endl;
        cout << "Would you like to play again or Exit?" << endl;
        cout << "Enter 'r' to play again or Enter 'e' to exit the game." << endl;
        cin >> hyn;

        while (hyn != 'r' && hyn != 'e') {
            cout << "Wrong Input, Try Again." << endl;
            cin >> hyn;
        }

        if (hyn == 'r') {
            system("cls");
            Hard_Mode hard_mode;
            
        } else if (hyn == 'e') {
            cout << "See You Again." << endl;
            sleep(2);
            exit(0);
        }
}

Hard_Mode::Hard_Mode(){
    HGreet();
    HSystem();
}

Hard_Mode::~Hard_Mode(){

}
// int main(){
    
// Hard_Mode h;

//     return 0;
// }