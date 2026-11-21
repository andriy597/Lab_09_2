#pragma once
#include <iostream>

#define MAX(a, b)  (((a) > (b)) ? (a) : (b))

#define MIN(a, b)  (((a) < (b)) ? (a) : (b))

#define ABS(a)     (((a) < 0) ? -(a) : (a))

#define SQR(a)     ((a) * (a))

#define BETWEEN(v, lo, hi)  (((v) > (lo)) && ((v) < (hi)))

#define PRINT(name)  std::cout << #name << " = " << (name) << std::endl
