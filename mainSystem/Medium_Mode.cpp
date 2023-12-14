#include <iostream>
#include <unistd.h>
#include <random>

#include  "Medium_Mode.hpp"
#include  "Hard_Mode.hpp"
using namespace std;

     void Medium_Mode::MGreet() {
        cout << "Welcome To Medium Level Of The Game." << endl;
        sleep(2);
        cout << "You have 15 attempts to guess the number.(1 to 25)" << endl;
        sleep(2);
        cout << "Good Luck, let's get started." << endl;
        sleep(2);
        system("cls");
    }

    void Medium_Mode::MSystem() {
        // Seed the random number generator
        random_device rdd;
        mt19937 gen(rdd());

        // Define the range of random numbers
        uniform_int_distribution<> dis(1, 25);

        // Generate a random number
        int randomNumM = dis(gen);
        cout << "Declaring random number..." << endl;
        sleep(2);
        cout << "Number Declared." << endl;
        cout << "Enter Your Guess:" << endl;
        Mtries = 0;
        cin >> Minput; 

        for (int i = 0; i < 15; i++) {
            if (Minput == randomNumM && Mtries != 15) {
                Mtries++;
                cout << "Congratulations! You Guessed the number " << randomNumM << " in " << Mtries << " tries." << endl;
                break;
            } else if (Minput != randomNumM && Mtries != 15) {
                Mtries++;
                cout << "Wrong Guess, Try Again. "
                     << " (Attempts Left : " << 15 - Mtries << ")" << endl;
                cin >> Minput;
            }
        }

        if (Minput != randomNumM && Mtries == 15) {
            cout << "Aw shucks, it looks like you lost." << endl;
            sleep(1);
            cout << "Wanna Try Again?" << endl;
            cout << "Enter 'r' to try again or Enter 'e' to Exit the Game." << endl;
            cin >> yn;

            while (yn != 'r' && yn != 'e') {
                cout << "I said, 'r' or 'e'..." << endl;
                cin >> yn;
            }

            if (yn == 'r') {
                system("cls");
                Medium_Mode m;
            } else if (yn == 'e') {
                cout << "See you Again." << endl;
                sleep(2);
                exit(0);
            }
        }

        sleep(2);
        cout << "So.." << endl;
        cout << "Would you like to play again or go to the next level or Exit?" << endl;
        cout << "Enter 'r' to play again, Enter 'h' to go to the next level or Enter 'e' to exit the game." << endl;
        cin >> yn;

        while (yn != 'r' && yn != 'h' && yn != 'e') {
            cout << "Wrong Input, Try Again." << endl;
            cin >> yn;
        }

        if (yn == 'r') {
            system("cls");
            MGreet();
            MSystem();
        } else if (yn == 'h') {
            cout << "boop, beep!" << endl;
            sleep(2);
            Hard_Mode hhhh;
        } else if (yn == 'e') {
            cout << "See You Again." << endl;
            sleep(2);
            exit(0);
        }
    }

   Medium_Mode::Medium_Mode(){
      MGreet();
      MSystem();
    }

    Medium_Mode::~Medium_Mode(){
 
    }

// int main() {
//     Medium_Mode m;

//     return 0;
// } 
