#pragma once
#include <string>
#include "Alphabet.hpp"

class CLetter
{
public:
  CLetter(alphabet letter);
  void setPoints(const int &points) { points_ = points; }
  int getPoints() { return points_; }
  std::string showLetter();
  char getLetter();
private:
  int points_;
  char letter_;
};