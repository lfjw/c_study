#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 猜数字游戏
int main()
{
  // 用当前时间来设定rand函数所用的随机数产生演算法的种子值
  srand(time(0));

  int number = rand() % 100 + 1;
  int count = 0;

  int a = 0;

  printf("我已经想好1-100之间的数字");

  do
  {
    /* code */
    printf("请猜这个1-100之间的数字：");
    scanf("%d", &a);
    count++;
    if (a > number)
    {
      printf("你猜的数字太大\n");
    }
    else if (a < number)
    {
      printf("你猜的数字小了\n");
    };
  } while (a != number);

  printf("太好了，你用了%d次就猜到答案\n", count);

  return 0;
}