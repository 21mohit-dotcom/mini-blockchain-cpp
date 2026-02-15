#include "block.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <openssl/sha.h>

Block::Block(int idx, const std::string& data, const std::string& prevHash)
    : index(idx), data(data), previousHash(prevHash), nonce(0) {
    timestamp = std::time(nullptr);
    hash = calculateHash();
}

std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << data << previousHash << timestamp << nonce;
    std::string input = ss.str();

    unsigned char hashOutput[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hashOutput);

    std::stringstream hashStream;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        hashStream << std::hex << std::setw(2) << std::setfill('0')
                   << static_cast<int>(hashOutput[i]);
    }

    return hashStream.str();
}

void Block::mineBlock(int difficulty) {
    std::string target(difficulty, '0');

    while (hash.substr(0, difficulty) != target) {
        nonce++;
        hash = calculateHash();
    }

    std::cout << "Block mined: " << hash << std::endl;
}
