#include <stdio.h>
#include <math.h>

int main()
{
  char x[10] = "dfsdddfsaf";
  for (int i = 0; i < 10; i++)
  {
    printf("%c", x[i]);
  }
  printf("\n");
  int WhatShouldIChange[3] = {1,2,5};
  for (int i = 0; i < 3; i++)
  {
    x[WhatShouldIChange[i]] -= 32;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%c", x[i]);
  }
  return 0;
}
