#pragma once
#include <string>

class ITile
{
public:
  ITile() = default;
  virtual ~ITile() = default;
  virtual void show() = 0;
  virtual bool putLetter(CLetter letter) = 0;
private:
  int bonus_;
  bool empty_;
  char letter_;
};