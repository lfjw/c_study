#include <stdio.h>

// ./demo2 dddd
// 0:./demo2
// 1 : dddd
int main(int argc, char const *argv[])
{
  int i = 0;
  for (i = 0; i < argc; i++)
  {
    printf("%d:%s\n", i, argv[i]);
  };

  return 0;
}