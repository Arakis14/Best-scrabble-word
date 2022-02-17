#include "Alphabet.hpp"
#include "CLetter.hpp"
#include <iterator>
#include <memory>
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
  //TODO: Add blanks and code their behavior
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

void pickLetterAtRandom(const std::shared_ptr<std::vector<CLetter>> &collection)
{
  int random = rand() % collection->size();
  
  std::cout << random << std::endl;
  //collection->at(random);
  //Erase from colletion to simulate taking letter from the bag
  collection->erase(collection->begin()+random);

}