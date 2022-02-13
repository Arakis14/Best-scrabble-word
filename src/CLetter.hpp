#pragma once
#include "Alphabet.hpp"
class CLetter
{
public:
  CLetter(alphabet letter);
  void setPoints(const int &points) { _points = points; }
  int getPoints() { return _points; }
private:
  int _points;
};