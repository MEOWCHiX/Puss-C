#include "PurrsistentVector.h"

int main() {
    PurrsistentVector<int> purrVector;
    purrVector.append(7);
    purrVector.append(8);
    purrVector.append(9);

    for(size_t i = 0; i < purrVector.size(); ++i) {
        std::cout << purrVector.at(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
