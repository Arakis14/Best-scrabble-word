#include <ctime>
#include <iostream>
#include <vector>
#include <memory>
#include "src/CLetter.cpp"
#include "src/Alphabet.hpp"
#include "src/Utility.cpp"
#include "src/CBoard.cpp"
#include "src/CBlankTile.cpp"

const int boardSize = 5;

int main()
{
    srand(time(NULL));
    auto bag = std::make_shared<std::vector<CLetter>>();
    auto player = std::make_shared<std::vector<CLetter>>();
    player->reserve(7);
    setUpLetters(bag);
    //std::cout << bag->size() << std::endl;
    //std::cout << getPointsFromCollection(bag) << std::endl;
    //fillTrayWithRandomLetters(bag, player);
    pickSpecificLetter(bag, player, 'm');
    std::cout << player->size() << std::endl;
    std::cout << showLetters(player) << std::endl;
    //char letter = 'a';
    std::string test1 = "mother";
    //findLetter(player,letter);
    canUseWord(player, test1);
    std::cout << std::boolalpha << "Is word " << test1 << " in the dictionary? " << isWordInDictionary(test1) << std::endl;
    auto board = CBoard(5);
    board.show();
    auto tile = CBlankTile();
    tile.putLetter(alphabet::a);
    tile.show();
}   