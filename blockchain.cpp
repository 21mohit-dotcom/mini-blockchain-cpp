#include "blockchain.h"
#include <iostream>

Blockchain::Blockchain(int diff) : difficulty(diff) {
    chain.push_back(createGenesisBlock());
}

Block Blockchain::createGenesisBlock() {
    return Block(0, "Genesis Block", "0");
}

void Blockchain::addBlock(const std::string& data) {
    Block newBlock(chain.size(), data, chain.back().hash);
    newBlock.mineBlock(difficulty);
    chain.push_back(newBlock);
}

bool Blockchain::isChainValid() const {
    for (size_t i = 1; i < chain.size(); i++) {
        const Block& current = chain[i];
        const Block& previous = chain[i - 1];

        if (current.hash != current.calculateHash()) {
            return false;
        }

        if (current.previousHash != previous.hash) {
            return false;
        }
    }

    return true;
}

void Blockchain::printChain() const {
    for (const auto& block : chain) {
        std::cout << "---------------------------\n";
        std::cout << "Index: " << block.index << "\n";
        std::cout << "Data: " << block.data << "\n";
        std::cout << "Hash: " << block.hash << "\n";
        std::cout << "Previous Hash: " << block.previousHash << "\n";
    }
}
