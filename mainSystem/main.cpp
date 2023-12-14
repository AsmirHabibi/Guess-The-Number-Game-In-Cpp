#include <iostream>
#include <unistd.h>
#include <string>

#include "level_system.hpp"
#include "Easy_Mode.hpp"
#include "Medium_Mode.hpp"
#include "Hard_Mode.hpp"

using namespace std;

class Greet {
    private:
        string name;
    public:
        Greet(){
            cout << "Welcome to Guess The Number!" << endl;
            sleep(2);
            cout << "What is your name mate?" << endl;
            getline(cin, name);
            sleep(1);
            cout <<  "Hi " << name << "!, " << endl;
            sleep(1);
            cout << "You will be prompted with 3 Levels to choose." << endl;
            sleep(2);
            cout << " Lets get started." << endl;
            level_selector l;
            // Easy_Mode e;
            // Medium_Mode mm;
            // Hard_Mode hhhhhhh;
        }
        ~Greet(){
            sleep(1);
            system("cls");
        }
};

int main(){
    Greet g;

    return 0;
}