#include "blockchain.h"
#include <iostream>

int main() {
    Blockchain myBlockchain(4);  // difficulty level (4 leading zeros)

    std::cout << "Adding block 1...\n";
    myBlockchain.addBlock("Mohit's first transaction");

    std::cout << "Adding block 2...\n";
    myBlockchain.addBlock("Mohit's second transaction");

    std::cout << "Adding block 3...\n";
    myBlockchain.addBlock("Mohit's third transaction");

    std::cout << "\nBlockchain:\n";
    myBlockchain.printChain();

    if (myBlockchain.isChainValid()) {
        std::cout << "\nBlockchain is valid.\n";
    } else {
        std::cout << "\nBlockchain is NOT valid.\n";
    }

    return 0;
}
