#include <stdio.h>

int main()
{
  char c = 255;
  int i = 255;

  printf("c=%d i=%d\n", c, i);
  // c 1字节 11111111
  // i 取决于cpu 00000000 00000000 00000000 11111111
  return 0;
}
