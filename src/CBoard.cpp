#include "CBoard.hpp"
#include "ITile.hpp"
#include "CBlankTile.hpp"

CBoard::CBoard(int size)
: size_(size)
{
}

void CBoard::show()
{
  for (auto i : board_)
  {
    i.show();
  }
}