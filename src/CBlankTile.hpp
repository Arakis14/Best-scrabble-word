#pragma once
#include "ITile.hpp"

class CBlankTile : public ITile
{
public:
  CBlankTile() = default;
  std::string show() override;
private:
  int bonus_;
  bool empty_ = true;
};