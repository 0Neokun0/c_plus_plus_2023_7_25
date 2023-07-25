// Stream manipulators - Boolean
// boolalpha and noboolalpha

#include <iostream>
#include <iomanip> // Must include

int main()
{

    std::cout << "noboolalpha - default (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 10) : " << (10 == 20) << std::endl;

    // Set to true/false formatting
    std::cout << std::boolalpha; // change to true/false
    std::cout << "boolalpha - default (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10 == 10) : " << (10 == 20) << std::endl;

    // Setting still stays for future boolean insertions
    std::cout << "boolalpha - default (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "boolalpha - default (10 == 10) : " << (10 == 20) << std::endl;

    return 0;
}