#pragma once
#include <string>
#include "Alphabet.hpp"

class CLetter
{
public:
  CLetter(alphabet letter);
  void setPoints(const int &points) { _points = points; }
  int getPoints() { return _points; }
  std::string showLetter();
private:
  int _points;
  char _letter;
};