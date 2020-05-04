#include "arrayFuncs.h"
#include "utility.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
  int evens = 0;
  for (int i = 0;i < size; i++)
  {
      if (isEven(a[i]))
        evens++;
  }
  return evens;
}
