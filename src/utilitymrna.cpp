//
// Created by Zhongyuan Zhao on 9/26/18.
//

#include "include/utilitymrna.h"
using namespace mrna;

bool mrna::isNum(std::string str)
{
  std::istringstream sin(str);
  double d;
  char c;
  if (!(sin >> d))
  {
    return false;
  }
  else if (sin >> c)
  {
    return false;
  }
  else
  {
    return true;
  }
}

std::string mrna::getstr(std::istringstream &instr)
{
  std::string str;
  while (instr >> str)
  {

    std::istringstream sin(str);
    double d;
    char c;
    if (!(sin >> d))
    {
      continue;
    }
    else if (sin >> c)
    {
      continue;
    }
    else
    {
      return str;
    }
  }
}