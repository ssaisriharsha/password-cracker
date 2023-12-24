#ifndef _CRACKER_HPP_
#define _CRACKER_HPP_
#include <string>
#include <exception>

using str = std::string;

class Cracker
{
    protected:
    str givenHash;
    str encoding;
    str testHash;
    str password;
    public:
    static str checkHash(str inputHash);
    virtual str matchHash(str inputHash) = 0;
    int checkBase(int base);
};

class MD5crack: Cracker
{
    public:
    MD5crack(){};
    ~MD5crack(){};
    void checkBase(int base) = delete;
    virtual str matchHash(str inputHash) override;
};

class SHA1crack: Cracker
{
    public:
    SHA1crack(){};
    ~SHA1crack(){};
    void checkBase(int base) = delete;
    virtual str matchHash(str inputHash) override;
};

class SHA256crack: Cracker
{
    public:
    SHA256crack() {};
    ~SHA256crack() {};
    void checkBase(int base) = delete;
    virtual str matchHash(str inputHash) override;
};

class SHA512crack: Cracker
{
    public:
    SHA512crack() {};
    ~SHA512crack() {};
    void checkBase(int base) = delete;
    virtual str matchHash(str inputHash) override;
};

#endif