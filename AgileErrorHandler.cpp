#include "CatError.h"
#include <iostream>

void exploreLabyrinth(int choice) {
    if(choice == 0) {
        throw CatError("Oh no, a dead end!");
    } else {
        std::cout << "Successfully navigated through the labyrinth." << std::endl;
    }
}

int main() {
    try {
        exploreLabyrinth(0);
    } catch(const CatError& e) {
        std::cout << "CatError: " << e.what() << " But the cat lands on its feet!" << std::endl;
    }

    return 0;
}
