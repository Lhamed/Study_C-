#include "stdio.h"
#include <string>
#include <iostream>
int main(int argc, char const *argv[])
{
    /* code */
    std::string strData = "Test String";
    std::cout << "Simple String " <<std::endl;
    std::cout <<strData<<std::endl;

    strData = "new Data";
    std::cout << strData<< std::endl;
    std::cout << "저는 " << 27 << " 살 " << "입니다." << std::endl;

    return 0;
}
