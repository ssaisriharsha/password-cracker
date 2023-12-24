#include "cracker.hpp"
#include <iostream>

int main()
{
    MD5crack abc;
    SHA1crack def;
    SHA256crack ghi;
    SHA512crack jkl;
    std::cout << Cracker::checkHash("abc") << std::endl;
    std::cout << abc.matchHash("abc") << std::endl;
    std::cout << def.matchHash("def") << std::endl;
    std::cout << ghi.matchHash("ghi") << std::endl;
    std::cout << jkl.matchHash("jkl") << std::endl;
    return 0;
}