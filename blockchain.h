#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "block.h"

class Blockchain {
private:
    std::vector<Block> chain;
    int difficulty;

    Block createGenesisBlock();

public:
    Blockchain(int difficulty);

    void addBlock(const std::string& data);
    bool isChainValid() const;
    void printChain() const;
};

#endif
