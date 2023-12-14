#include <iostream>
#include <unistd.h>
#include <string> 
#include <random>

#include "Easy_Mode.hpp"
#include "Medium_Mode.hpp"
using namespace std;


    Easy_Mode::Easy_Mode()
    {
        // Seed the random number generator
        random_device rd;
        mt19937 gen(rd());

        // Define the range of random numbers
        uniform_int_distribution<> dis(1, 25);

        // Generate a random number
        int randomNum = dis(gen); 

        cout << "Welcome To Easy Mode.\n";
        sleep(1);
        cout << "You have to guess a number between 1 to 25.\n";
        sleep(2);
        cout << "Lets get started.\n";
        sleep(1);
        system("cls");
        cout << "Declaring  Number...\n";
        sleep(1);
        cout << "Number Declared.\n";
        sleep(2);
        cout << "Enter Your Guess, \n";
        cin >> guessInput;
        for (;;)
        { 
            if (guessInput == randomNum)
            {
                tries++;
                cout << "Congrats! You guessed the number " << randomNum << " in " << tries << " tries." << endl;
                break;
            }
            else
            {
                tries++;
                cout << "Wrong Guess, Try again.\n";
                cin >> guessInput;
            }
        }
        sleep(2);
        cout << "I was Wondering that if you want to play again or move to the Next level?\n";
        cout << "Enter 'r' to retry or Enter 'm' to play medium mode\n";
        cin >> inputL;
        for (;;)
        {
        if (inputL == 'r' || inputL == 'm')
        {
            break;
        } else {
            cout << "Wrong Input, Try Again\n";
            cin >> inputL;
        }
        }
        if (inputL == 'r')
        {
            system("cls");
            Easy_Mode();
        } else if(inputL == 'm'){
            // Medium Mode
            cout << "Beep, Boop.." << endl;
            sleep(2);
            system("cls");
            Medium_Mode medium_mode;
            
        }
   }
    Easy_Mode::~Easy_Mode(){
        
    }


// int main(){
//     Easy_Mode e;


//     return 0;
// }