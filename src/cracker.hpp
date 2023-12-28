#ifndef _CRACKER_HPP_
#define _CRACKER_HPP_
#include <string>
#include <exception>
#include "exceptions.hpp"

using str = std::string;

class Cracker
{
    private:
    // int bits;
    protected:
    str ENCODING;
    str GIVENHASH;
    // str testHash;
    str password;
    public:
    static str checkHash(str inputHash, int bits) noexcept(false);
    virtual str matchHash() = 0;
    virtual str generateHash() noexcept = 0;
    static int checkBase(int base) noexcept(false);
    [[noreturn]]static void baseError() noexcept(false);
};

class MD5crack: Cracker
{
    public:
    MD5crack(str inputHash, str ENCODING){GIVENHASH = inputHash;this->ENCODING = ENCODING;};
    ~MD5crack(){};
    virtual str matchHash() override;
    virtual str generateHash() noexcept override;
};

class SHA1crack: Cracker
{
    public:
    SHA1crack(str inputHash, str ENCODING){GIVENHASH = inputHash;this->ENCODING = ENCODING;};
    ~SHA1crack(){};
    virtual str matchHash() override;
    virtual str generateHash() noexcept override;
};

class SHA256crack: Cracker
{
    public:
    SHA256crack(str inputHash, str ENCODING) {GIVENHASH = inputHash;this->ENCODING = ENCODING;};
    ~SHA256crack() {};
    virtual str matchHash() override;
    virtual str generateHash() noexcept override;
};

class SHA512crack: Cracker
{
    public:
    SHA512crack(str inputHash, str ENCODING) {GIVENHASH = inputHash;this->ENCODING = ENCODING;};
    ~SHA512crack() {};
    virtual str matchHash() override;
    virtual str generateHash() noexcept override;
};

#endif