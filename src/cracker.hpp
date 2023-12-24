#ifndef _CRACKER_HPP_
#define _CRACKER_HPP_
#include <string>
class Cracker
{
    protected:
    std::string givenHash;
    std::string testHash;
    std::string password;
    public:
    static std::string checkHash(std::string inputHash);
    virtual std::string matchHash(std::string inputHash) = 0;
};

class MD5crack: Cracker
{
    public:
    MD5crack(){};
    ~MD5crack(){};
    virtual std::string matchHash(std::string inputHash) override;
};

class SHA1crack: Cracker
{
    public:
    SHA1crack(){};
    ~SHA1crack(){};
    virtual std::string matchHash(std::string inputHash) override;
};

class SHA256crack: Cracker
{
    public:
    SHA256crack() {};
    ~SHA256crack() {};
    virtual std::string matchHash(std::string inputHash) override;
};

class SHA512crack: Cracker
{
    public:
    SHA512crack() {};
    ~SHA512crack() {};
    virtual std::string matchHash(std::string inputHash) override;
};

#endif