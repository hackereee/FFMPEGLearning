#include "MathFunctions.h"
#include <math.h>
#include <iostream>

// 牛顿法快速求平方根, 近似值
double mysqrt(double num)
{

  std::cout << "\r \n the num is " << num <<std::endl;

  double x = num;
    double root;
    
    for(int i = 0; i < 10; i++) {
        root = 0.5 * (x + (num / x));
        x = root;
    }
    
    return root;
}