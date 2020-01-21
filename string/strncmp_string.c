#include <stdio.h>
#include "string.h"
int main(int argc, char **argv) {
  char *s1 = "Hello World!";
  char *s2 = "Hello Boy!";
  int cmp = strncmp(s1, s2, 5);
  printf("%s compare with %s in 5, is %d\n", s1, s2, cmp);
  return 0;
}
