#include <ctime>
#include <iostream>
#include <vector>
#include <memory>
#include "src/CBlankTile.cpp"
#include "src/CLetter.cpp"
#include "src/Alphabet.hpp"
#include "src/Utility.cpp"

int main()
{
    srand(time(NULL));
    auto bag = std::make_shared<std::vector<CLetter>>();
    auto player = std::make_shared<std::vector<CLetter>>();
    player->reserve(7);
    setUpLetters(bag);
    //std::cout << bag->size() << std::endl;
    //std::cout << getPointsFromCollection(bag) << std::endl;
    fillTrayWithLetters(bag, player);
    std::cout << player->size() << std::endl;
    std::cout << showLetters(player) << std::endl;
    //char letter = 'a';
    std::string test1 = "mother";
    //findLetter(player,letter);
    canUseWord(player, test1);
    std::cout << std::boolalpha << isWordInDictionary(test1) << std::endl;
}   