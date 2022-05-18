#include <stdio.h>

int main()
{
  int n = 0;
  int count = 3;
  while (count >= 0)
  {
    count--;
    n++;
    printf("%d\n", count);
  }

  printf("总共循环了 %d 次 \n", n);
  printf("发射\n");

  return 0;
}