//
// Created by Zhongyuan Zhao on 9/26/18.
//

#ifndef UTILITY_H_
#define UTILITY_H_

#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>

namespace mrna
{

    bool isNum(std::string str);

    std::string getstr(std::istringstream &instr);
}
#endif //UTILITY_H
