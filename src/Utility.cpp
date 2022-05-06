#include "Alphabet.hpp"
#include "CLetter.hpp"
#include "DictionaryTest.hpp"
#include <algorithm>
#include <bitset>
#include <iostream>
#include <iterator>
#include <memory>
#include <string>
#include <vector>

// TODO: change the return to parameter, so that the collection would be creted in this function.
void setUpLetters(const std::shared_ptr<std::vector<CLetter>> &collection)
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
  for (auto i = 0; i < 2; i++)
  {
    collection->emplace_back(alphabet::f);
  }
  for (auto i = 0; i < 3; i++)
  {
    collection->emplace_back(alphabet::g);
  }
  for (auto i = 0; i < 2; i++)
  {
    collection->emplace_back(alphabet::h);
  }
  for (auto i = 0; i < 9; i++)
  {
    collection->emplace_back(alphabet::i);
  }
  collection->emplace_back(alphabet::j);
  collection->emplace_back(alphabet::k);
  for (auto i = 0; i < 4; i++)
  {
    collection->emplace_back(alphabet::l);
  }
  for (auto i = 0; i < 2; i++)
  {
    collection->emplace_back(alphabet::m);
  }
  for (auto i = 0; i < 6; i++)
  {
    collection->emplace_back(alphabet::n);
  }
  for (auto i = 0; i < 8; i++)
  {
    collection->emplace_back(alphabet::o);
  }
  for (auto i = 0; i < 2; i++)
  {
    collection->emplace_back(alphabet::p);
  }
  collection->emplace_back(alphabet::q);
  for (auto i = 0; i < 6; i++)
  {
    collection->emplace_back(alphabet::r);
  }
  for (auto i = 0; i < 4; i++)
  {
    collection->emplace_back(alphabet::s);
  }
  for (auto i = 0; i < 6; i++)
  {
    collection->emplace_back(alphabet::t);
  }
  for (auto i = 0; i < 4; i++)
  {
    collection->emplace_back(alphabet::u);
  }
  for (auto i = 0; i < 2; i++)
  {
    collection->emplace_back(alphabet::v);
  }
  for (auto i = 0; i < 2; i++)
  {
    collection->emplace_back(alphabet::w);
  }
  collection->emplace_back(alphabet::x);
  for (auto i = 0; i < 2; i++)
  {
    collection->emplace_back(alphabet::y);
  }
  collection->emplace_back(alphabet::z);
  // TODO: Add blanks and code their behavior
  /*
  collection->emplace_back(alphabet::blank);
  collection->emplace_back(alphabet::blank);
  */
}

int getPointsFromCollection(const std::shared_ptr<std::vector<CLetter>> &collection)
{
  int totalLetterPoints{0};
  for (long unsigned int i = 0; i < collection->size(); i++)
  {
    totalLetterPoints += collection->at(i).getPoints();
  }
  return totalLetterPoints;
}

void pickLetterAtRandom(const std::shared_ptr<std::vector<CLetter>> &bag, const std::shared_ptr<std::vector<CLetter>> &player)
{
  int random = rand() % bag->size();
  player->insert(player->begin(), bag->at(random));
  // Erase from colletion to simulate taking letter from the bag
  bag->erase(bag->begin() + random);
}

void fillTrayWithLetters(const std::shared_ptr<std::vector<CLetter>> &bag, const std::shared_ptr<std::vector<CLetter>> &player)
{
  long unsigned int trayMax = 7;
  while (player->size() != trayMax)
  {
    pickLetterAtRandom(bag, player);
  }
}

std::string showLetters(const std::shared_ptr<std::vector<CLetter>> &player)
{
  std::string temp{};
  for (long unsigned int i = 0; i < player->size(); i++)
  {
    temp += player->at(i).showLetter();
  }
  return temp;
}

int findLetter(const std::shared_ptr<std::vector<CLetter>> &player, char &letter)
{
  std::string temp{};
  for (long unsigned int i = 0; i < player->size(); i++)
  {
    temp += player->at(i).showLetter();
  }
  auto res = temp.find(letter);
  if (res == std::string::npos)
  {
    std::cout << "You don't have the letter " << letter << ". Sorry!" << std::endl;
    return -1;
  }
  return res;
}

bool canUseWord(const std::shared_ptr<std::vector<CLetter>> &player, std::string &word)
{
  for (auto letter : word)
  {
    auto res = findLetter(player, letter);
    if (res == -1)  { return false; }
  }
  return true;
}

bool isWordInDictionary(const std::string &word)
{
  auto res = std::find(begin(dictionary), end(dictionary), word);
  if (res != std::end(dictionary)) { return true; }
  return false;
}