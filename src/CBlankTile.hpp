#pragma once
#include "ITile.hpp"

class CBlankTile : public ITile
{
public:
  CBlankTile() = default;
  void show() override;
  bool putLetter(CLetter letter) override;
private:
  bool empty_ = true;
  char letter_;
};