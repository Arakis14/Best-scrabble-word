#pragma once
#include <string>

class ITile
{
public:
  ITile() = default;
  virtual ~ITile() = default;
  virtual std::string show() = 0;
private:
  int bonus_;
  bool empty_ = true;
  char letter_;
};