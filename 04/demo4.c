#include <stdio.h>

// 算平均数
int main()
{
  int number = 0;
  int sum = 0;
  int count = 0;

  scanf("%d", &number);

  while (number != -1)
  {
    sum += number;
    count++;
    scanf("%d", &number);
    /* code */
  }

  printf("%f\n", 1.0 * sum / count);

  return 0;
}