#include <stdio.h>

int main()
{
  char word[8];

  scanf("%7s", word); // 不安全，长度不一定  最多7个字符

  printf("%s##\n", word);

  return 0;
}