#ifndef PURR_H
#define PURR_H

#include <iostream>

namespace Purr {
    void say(const char* message) {
        std::cout << message << " Purr, purr..." << std::endl;
    }
}

#endif // PURR_H
