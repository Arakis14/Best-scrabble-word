#pragma once
#include <vector>
#include "CBlankTile.hpp"

class CBoard
{
public:
  CBoard(int size);
  void show();
  bool setUpBoard();
private:
  int size_;
  std::vector<CBlankTile> board_;
};