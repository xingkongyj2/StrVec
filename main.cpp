#include <iostream>
#include "StrVec/StrVec.h"

int main() {
    StrVec strVec;
    std::string s="mayj &";
    std::string s2="zhangmy";
    strVec.push_back(s);
    strVec.push_back(s2);
    for(auto item:strVec)
        std::cout<<item<<std::endl;
    return 0;
}
