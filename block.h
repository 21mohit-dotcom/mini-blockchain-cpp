#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <ctime>

class Block {
public:
    int index;
    std::string data;
    std::string previousHash;
    std::string hash;
    long nonce;
    std::time_t timestamp;

    Block(int idx, const std::string& data, const std::string& prevHash);

    std::string calculateHash() const;
    void mineBlock(int difficulty);
};

#endif
