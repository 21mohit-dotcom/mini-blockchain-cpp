#include "blockchain.h"
#include <iostream>

int main() {
    Blockchain myBlockchain(4);

    std::cout << "Adding block 1...\n";
    myBlockchain.addBlock("Mohit's first transaction");

    std::cout << "Adding block 2...\n";
    myBlockchain.addBlock("Mohit's second transaction");

    std::cout << "\nBlockchain:\n";
    myBlockchain.printChain();

    std::cout << "\nChecking validity...\n";
    if (myBlockchain.isChainValid()) {
        std::cout << "Blockchain is valid.\n";
    } else {
        std::cout << "Blockchain is NOT valid.\n";
    }

    return 0;
}

