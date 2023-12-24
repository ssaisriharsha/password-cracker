#include "cracker.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::boolalpha;
    str inputHash;
    std::cout << "Enter the hash: ";
    std::cin >> inputHash;
    std::cout << inputHash.size() << std::endl;
    int base = std::stoi(inputHash.substr(4, 2));
    std::cout << base << std::endl;
    // std::cout << (pow(2, 6) == base) << std::endl;
    return 0;
}
