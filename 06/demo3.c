#include <stdio.h>

int main()
{
  char c;
  char d;
  c = 1;
  d = '1'; // 字符 ascii码
  if (c == d)
  {
    printf("相等\n");
  }
  else
  {
    printf("不想等\n");
  }
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  return 0;
}