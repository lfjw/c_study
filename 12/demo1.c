#include <stdio.h>
#include "max.h"

int f(void);

int gAll = 2; // 全局变量
// gcc  max.c demo1.c

int main()
{
  printf("in %s gAll = %d\n", __func__, gAll);

  f();

  printf("agn in %s gAll = %d\n", __func__, gAll);

  printf("max= %d\n", max());
  printf("min= %d\n", min());
  return 0;
}

int f(void)
{
  printf("in %s gAll = %d\n", __func__, gAll);

  gAll += 2;

  printf("agn in %s gAll = %d\n", __func__, gAll);

  return gAll;
}