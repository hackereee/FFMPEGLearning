#include "MathFunctions.h"
#include <math.h>
#include <iostream>

// 牛顿法快速求平方根, 近似值
double mysqrt(double num)
{

  std::cout << "\n the num is " << num << std::endl;

#if defined(HAVE_LOG) && defined(HAVE_EXP)
  std::cout << "we are using log and exp calcualte the num sqrt for result:" << exp(log(num)/2) << std::endl;
#endif

  double x = num;
  double root;

  for (int i = 0; i < 10; i++)
  {
    root = 0.5 * (x + (num / x));
    x = root;
  }

  return root;
}