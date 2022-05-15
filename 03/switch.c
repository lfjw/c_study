#include <stdio.h>

int main()
{
  int age = 0;
  printf("请输入值：");
  scanf("%d", &age);

  switch (age)
  {
  case 6:
    printf("早上");
    break;

  case 12:
    printf("中午");
    break;

  case 18:
    printf("下午");
    break;

  default:
    printf("其他");
    break;
  }
  return 0;
}