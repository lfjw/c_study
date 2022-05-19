#include <stdio.h>

void cheer(int i)
{
  printf("cheer %d\n", i);
}
int main()
{
  // 类型转换
  cheer(2.0);
  return 0;
}