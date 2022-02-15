#include <iostream>
#include <vector>
#include <memory>
#include "src/CBlankTile.cpp"
#include "src/CLetter.cpp"
#include "src/Alphabet.hpp"

void setUpLetters(std::shared_ptr<std::vector<CLetter>> collection)
{
    for (auto i = 0; i < 9; i++)
    {
        collection->emplace_back(alphabet::a);
    }
        for (auto i = 0; i < 2; i++)
    {
        collection->emplace_back(alphabet::b);
    }
        for (auto i = 0; i < 2; i++)
    {
        collection->emplace_back(alphabet::c);
    }
        for (auto i = 0; i < 4; i++)
    {
        collection->emplace_back(alphabet::d);
    }
    for (auto i = 0; i < 12; i++)
    {
        collection->emplace_back(alphabet::e);
    }
}

int main()
{
    auto collection = std::make_shared<std::vector<CLetter>>();
    setUpLetters(collection);
    std::cout << collection->size() << std::endl;
}