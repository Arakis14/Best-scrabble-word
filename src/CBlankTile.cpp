#include "CBlankTile.hpp"

void CBlankTile::show()
{
  if (empty_)
  {
    std::cout << " " << '\n';
  }
  else 
    std::cout << letter_ << '\n';
}

bool CBlankTile::putLetter(CLetter letter)
{
  letter_ = letter.getLetter();
  empty_ = false;
  return true;
}