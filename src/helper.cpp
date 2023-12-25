#include "cracker.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int action = 0;
    std::cout << "Welcome to password cracker." << std::endl;
    std::cout << "(Supported hash formats: MD5, SHA1, SHA256, SHA512)." << std::endl;
    std::cout << "Select the action you want to perform: " << std::endl;
    std::cout << "1. Detect hash type." << std::endl;
    std::cout << "2. Crack hash." << std::endl;
    std::cin >> action;
    switch(action)
    {
        case 1:
            std::string inputHash;
            std::string encodingType;
            int base = 0;
            std::cout << "Enter the hash value: ";
            std::cin >> inputHash;
            std::cout << "Enter the encoding type(baseXX format): ";
            std::cin >> encodingType;
            base = std::stoi(encodingType.substr(4, 2));
            try
            {
                int bits = Cracker::checkBase(base);
                std::string hashType = Cracker::checkHash(inputHash, bits);
                std::cout << "The given has is of " << hashType << " Type" << std::endl;
            }
            catch(const InvalidBase& e)
            {
                std::cerr << e.what() << '\n';
            }
            catch(const InvalidHashException& e)
            {
                std::cerr << e.what() << std::endl;
            }
            catch(...)
            {
                std::cerr << "Unknown exception" << std::endl;
            }
            

    }
    return 0;
}
