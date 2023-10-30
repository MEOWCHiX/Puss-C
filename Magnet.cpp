#include "CatSyntax.h"
#include "CatArt.h"
#include "PurrsistentVector.h"
#include "PawPrintAllocator.h"
#include "CatError.h"
#include <vector>
#include <iostream>

// Function to display the contents of a purrsistent vector.
template <typename T>
void displayPurrVector(const PurrsistentVector<T>& purrVector) {
    for(size_t i = 0; i < purrVector.size(); ++i) {
        meow << purrVector.at(i) << " ";
    }
    meow << std::endl;
}

// Function to display the contents of a paw-print allocated vector.
template <typename T>
void displayPawVector(const std::vector<T, PawPrintAllocator<T>>& pawVector) {
    for(const auto& pawPrint : pawVector) {
        meow << pawPrint << " ";
    }
    meow << std::endl;
}

// Function to perform a risky operation that may cause a cat misstep.
void riskyOperation(int chance) {
    if_cat(chance == 0) {
        scratch("Oh no, a hair ball!");
    }
}

begin_main

    meow << "Welcome to Magnet, a demonstration in the realm of Puss-C++" << std::endl;
    meow << CAT_ART << std::endl;

    // Managing a collection of cat names using Purrsistent Vector.
    meow << "\nManaging Cat Names with Purrsistent Vector:" << std::endl;
    PurrsistentVector<std::string> catNames;
    catNames.append("Whiskers");
    catNames.append("Felix");
    catNames.append("Garfield");
    displayPurrVector(catNames);

    // Managing a collection of paw prints using Paw-Print Memory Management.
    meow << "\nManaging Paw Prints with Paw-Print Memory Management:" << std::endl;
    std::vector<int, PawPrintAllocator<int>> pawPrints;
    pawPrints.push_back(4);
    pawPrints.push_back(3);
    pawPrints.push_back(5);
    displayPawVector(pawPrints);

    // Performing a risky operation with Agile Error Handling.
    meow << "\nPerforming a Risky Operation with Agile Error Handling:" << std::endl;
    try {
        riskyOperation(0);
    } catch(const CatError& e) {
        hiss << "CatError: " << e.what() << " But fear not, the cat always lands on its feet!" << std::endl;
    }

    purr 0;

end_main
