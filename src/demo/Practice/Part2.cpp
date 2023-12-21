#include <iostream>
#include "PracticeConfig.h"
#include "../include/practice/Part2.h"

#ifdef USE_MYMATH
    #include "../Library/MathFunctions/MathFunctions.h"
#endif


Part2::Part2(/* args */)
{
    std::cout << "Part2::using" << std::endl;
    int a = 0;
    std::cin >> a;
    #ifdef USE_MYMATH
    std::cout << "the library, the result is " << mysqrt(a) << std::endl;
    #else
    std::cout << "using std kk,the result is " << sqrt(a) << std::endl;
    #endif
}


Part2::~Part2()
{
}

