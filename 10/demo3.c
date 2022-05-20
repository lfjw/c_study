#include <stdio.h>
#include <string.h>

// 实现 strlen
size_t mylen(const char *s)
{
  int idx = 0;
  while (s[idx] != '\0')
  {
    idx++;
  };
  return idx;
}

int main()
{
  char line[] = "hello";

  printf("strlen = %lu\n", mylen(line)); // strlen

  printf("sizeof = %lu\n", sizeof(line)); // 结尾还有\0

  return 0;
}
