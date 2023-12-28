#include "cracker.hpp"
#include <iostream>
#include <cmath>

str Cracker::checkHash(str inputHash, int bits) noexcept(false)
{
    int hashLength = inputHash.size();
    int hashSize = hashLength * bits;
    switch(hashSize)
    {
        case 256:
            return "SHA-256";
        case 512:
            return "SHA-512";
        case 160:
            return "SHA-1";
        case 128:
            return "MD5";
        default:
            throw InvalidHashException();
    }
}

int Cracker::checkBase(int base) noexcept(false)
{
    if (floor(log2(base)) == ceil(log2(base)))
    {
        return log2(base);
    }
    baseError();
}

str MD5crack::matchHash()
{
    return "Not implemented.";
}

str SHA1crack::matchHash()
{
    return "Not implemented.";
}

str SHA256crack::matchHash()
{
    return "Not implemented.";
}

str SHA512crack::matchHash()
{
    return "Not implemented.";
}

[[noreturn]] void Cracker::baseError() noexcept(false)
{
    throw InvalidBase();
}

str MD5crack::generateHash() noexcept
{
    return "Not implemented.";
}

str SHA1crack::generateHash() noexcept
{
    return "Not implemented.";
}

str SHA256crack::generateHash() noexcept
{
    return "Not implemented.";
}

str SHA512crack::generateHash() noexcept
{
    return "Not implemented.";
}


