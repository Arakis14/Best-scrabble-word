#include "CBlankTile.hpp"

std::string CBlankTile::show()
{
  if (empty_)
  {
    return "";
  }
  else 
    return "x";
}
