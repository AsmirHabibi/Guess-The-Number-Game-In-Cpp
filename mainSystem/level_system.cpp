#include <iostream>
#include <unistd.h>
#include <string>

#include "level_system.hpp"
#include "Easy_Mode.hpp"
#include "Medium_Mode.hpp"
#include "Hard_Mode.hpp"

using namespace std;

 
    
    level_selector::level_selector(){
        std::cout << "There are 3 levels:" << std::endl;
        sleep(2);
        std::cout << "Easy, Medium, Hard." << std::endl;
        sleep(1);
        std::cout << "Enter 'e' for easy mode, 'm' for medium mode and 'h' for hard mode" << std::endl;
        std::cin >> level_input;
        for (;;)
        {
        if (level_input == 'e' || level_input == 'm' || level_input == 'h')
        {
            break;
        } else {
            std::cout << "Invalid Input, try again with e, m or h" << std::endl;
            std::cin >> level_input;
        }
        }

         if (level_input == 'e')
        {
            std::cout << "You have selected easy mode, am I right?\n";
            std::cin >> confirmation;
            
            for (;;)
            {
            if (confirmation == "yes" || confirmation == "Yes" || confirmation == "no" || confirmation == "No")
            {
                break;
            } else {
                std::cout << "I didn't understand, was that a yes or no?" << std::endl;
                std::cin >> confirmation;
            } 

            }
            if (confirmation == "yes" || confirmation == "Yes")
            {
                // Easy Mode System
                Easy_Mode ee;
            } else {
                level_selector();
            }
        }
        if (level_input == 'm')
        {
            std::cout << "You have selected medium mode, am I right?\n";
            std::cin >> confirmation;   

        for (;;)
            {
            if (confirmation == "yes" || confirmation == "Yes" || confirmation == "no" || confirmation == "No")
            {
                break;
            } else {
                std::cout << "I didn't understand, was that a yes or no?" << std::endl;
                std::cin >> confirmation;
            } 

            }
            if (confirmation == "yes" || confirmation == "Yes")
            {
                // Easy Mode System
                Medium_Mode medium_mode;
            } else {
                level_selector();
            }
        }
        if (level_input == 'h')
        {
            std::cout << "You have selected hard mode, am I right?\n";
            std::cin >> confirmation;   

        for (;;)
            {
            if (confirmation == "yes" || confirmation == "Yes" || confirmation == "no" || confirmation == "No")
            {
                break;
            } else {
                std::cout << "I didn't understand, was that a yes or no?" << std::endl;
                std::cin >> confirmation;
            } 

            }
            if (confirmation == "yes" || confirmation == "Yes")
            {
                // Easy Mode System
                Hard_Mode Hard_mode;
            } else {
                level_selector();
            }
        }
        
    }
    level_selector::~level_selector(){
        std::cout << "Destructor Called!" << std::endl;
    }


