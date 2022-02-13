#include <iostream>
#include <memory>
#include "src/CBlankTile.cpp"
#include "src/CLetter.cpp"
#include "src/Alphabet.hpp"


int main()
{
    std::cout << "Project!" << std::endl;
    //alphabet abc;
    //abc = alphabet::q;
    std::shared_ptr <CLetter> letter1 = std::make_shared<CLetter>(alphabet::w);

    std::cout << letter1->getPoints() << std::endl;
}