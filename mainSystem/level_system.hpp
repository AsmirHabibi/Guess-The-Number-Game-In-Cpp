
// #pragma once
#ifndef LEVEL_SYSTEM_HPP
#define LEVEL_SYSTEM_HPP

#include <string>
 
class level_selector {
    private:
    char level_input;
    std::string confirmation;
    public:
        void level_system();
        level_selector();
        ~level_selector();
};

#endif