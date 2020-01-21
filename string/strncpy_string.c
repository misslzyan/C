#include <stdio.h>
#include "string.h"
int main(int argc, char **argv) {
  char s1[100];
  char *s2 = "Hello World!";
  char *s3 = strncpy(s1, s2, 50);
  printf("res:%s\n", s3);
  return 0;
}
