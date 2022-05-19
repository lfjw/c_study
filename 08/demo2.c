#include <stdio.h>

/**
 * 找出
 * @params key 关键字
 * @params a 数组
 * @params length 数组长度
 * @return 如果找到返回下标位置，找不到返回-1
 */
int search(int key, int a[], int length);

int main()
{
  int a[] = {2, 4, 1, 5}; // 数组集成初始化
  int x;
  int loc;
  printf("请输入关键字：");
  scanf("%d", &x);

  // 数组内容大小
  loc = search(x, a, sizeof(a) / sizeof(a[0]));

  if (loc != -1)
  {
    printf("%d在第%d位置上\n", x, loc);
  }
  else
  {
    printf("%d不存在\n", x);
  }
  return 0;
}

int search(int key, int a[], int length)
{
  int ret = -1;
  int i;
  for (i = 0; i < length; i++)
  {
    if (a[i] == key)
    {
      ret = i;
      break;
    }
  }

  return ret;
}