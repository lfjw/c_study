#include <stdio.h>

int main()
{
  // 1 初始化
  int price = 0;
  int bill = 0;

  // 2 读入金额和票面
  printf("请输入金额：");
  scanf("%d", &price);

  printf("请输入票面：");
  scanf("%d", &bill);

  // 3 计算找零
  if (bill >= price)
  {
    printf("应该找你：%d\n", bill - price);
  }
  else
  {
    printf("金额不足\n");
  }

  return 0;
}