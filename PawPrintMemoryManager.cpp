#include "PawPrintAllocator.h"
#include <vector>

int main() {
    std::vector<int, PawPrintAllocator<int>> pawVector;
    pawVector.push_back(9);
    pawVector.push_back(8);
    pawVector.push_back(7);

    for(const auto& pawPrint : pawVector) {
        std::cout << pawPrint << " ";
    }
    std::cout << std::endl;

    return 0;
}
