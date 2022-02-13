#include "CLetter.hpp"

CLetter::CLetter(alphabet letter)
{
  if (letter == a ||
      letter == e ||
      letter == i ||
      letter == o ||
      letter == u ||
      letter == l ||
      letter == n ||
      letter == s ||
      letter == t ||
      letter == r)
  {
    setPoints(1);
  }
  else if (letter == d ||
           letter == g)

  {
    setPoints(2);
  }
  else if (letter == b ||
           letter == c ||
           letter == m ||
           letter == p)
  {
    setPoints(3);
  }
  else if (letter == f ||
           letter == h ||
           letter == v ||
           letter == w ||
           letter == y)
  {
    setPoints(4);
  }
  else if (letter == k)
  {
    setPoints(5);
  }
  else if (letter == j ||
           letter == x)
  {
    setPoints(8);
  }
  else if (letter == q ||
           letter == z)
  {
    setPoints(10);
  }
  else
    setPoints(0);
}