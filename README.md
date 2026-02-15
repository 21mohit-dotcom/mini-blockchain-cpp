# 🚀 Mini Blockchain in C++

A simple blockchain implementation written in C++ demonstrating:

- Block structure
- SHA-256 hashing
- Proof-of-Work (mining)
- Block linking using previous hashes
- Chain validation

This project was built to understand the internal working of blockchain systems like Bitcoin at a structural level.

---

## 📌 Features

- Genesis Block creation
- Dynamic block addition
- Adjustable mining difficulty
- Nonce-based proof-of-work
- Full chain validation
- CLI-based output

---

## 🧠 Concepts Implemented

### 1️⃣ Block Structure
Each block contains:
- Index
- Timestamp
- Data
- Previous hash
- Current hash
- Nonce (for mining)

### 2️⃣ Hashing
SHA-256 is used to generate cryptographic hashes.

### 3️⃣ Proof of Work
Blocks are mined by finding a hash with a specified number of leading zeros.

### 4️⃣ Chain Integrity
Each block stores the previous block’s hash.
If any block is modified, the chain becomes invalid.

---

## 🛠 Technologies Used

- C++
- STL (vector, string, iostream)
- OpenSSL (SHA-256)

---

## 📂 Project Structure

mini-blockchain-cpp/
│
├── block.h
├── block.cpp
├── blockchain.h
├── blockchain.cpp
└── main.cpp


---

## ▶ How to Compile (Linux / WSL)

g++ main.cpp block.cpp blockchain.cpp -lssl -lcrypto -o blockchain
./blockchain



---

## 🎯 Purpose

This project is built as a learning exercise to understand how blockchain systems maintain immutability, decentralized trust, and cryptographic integrity at a structural level.

It is not a full cryptocurrency implementation.




## 📂 Project Structure

