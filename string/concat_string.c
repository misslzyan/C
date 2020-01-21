#include <stdio.h>
#include "string.h" // my own string.h
#include <stdlib.h>
int main(int argc, char **args) {
  char *str1 = "Hello";
  char *str2 = " World!";
  size_t l1 = strlen(str1);
  size_t l2 = strlen(str2);
  printf("l1:%lu,l2:%lu\n",l1,l2);
  char *out_put = (char *)malloc(sizeof(char) * (strlen(str1) + strlen(str2)));
  strcpy(out_put, str1);
  printf("cpy:%s\n",out_put);
  strcat(out_put, str2);
  printf("%s\n", str2);
  printf("%s\n", out_put);
  return 0;
}
