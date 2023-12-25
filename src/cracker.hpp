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
    // str ENCODING;
    protected:
    str GIVENHASH;
    str testHash;
    str password;
    public:
    static str checkHash(str inputHash, int bits) noexcept(false);
    virtual str matchHash(str inputHash) = 0;
    static int checkBase(int base) noexcept(false);
    [[noreturn]]static void baseError() noexcept(false);
};

class MD5crack: Cracker
{
    public:
    MD5crack(){};
    ~MD5crack(){};
    virtual str matchHash(str inputHash) override;
};

class SHA1crack: Cracker
{
    public:
    SHA1crack(){};
    ~SHA1crack(){};
    virtual str matchHash(str inputHash) override;
};

class SHA256crack: Cracker
{
    public:
    SHA256crack() {};
    ~SHA256crack() {};
    virtual str matchHash(str inputHash) override;
};

class SHA512crack: Cracker
{
    public:
    SHA512crack() {};
    ~SHA512crack() {};
    virtual str matchHash(str inputHash) override;
};

#endif