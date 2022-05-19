#include <stdio.h>

// 统计个数

int main()
{
  const int number = 10; // 初始化数组大小
  int x;
  int count[number];
  int i;

  // 初始化数组
  for (i = 0; i < number; i++)
  {
    count[i] = 0;
  }

  scanf("%d", &x);

  while (x != -1)
  {
    if (x >= 0 && x <= 9)
    {
      count[x]++;
    }
    scanf("%d", &x);
  }

  for (i = 0; i < number; i++)
  {
    printf("%d:%d\n", i, count[i]);
  }

  return 0;
}