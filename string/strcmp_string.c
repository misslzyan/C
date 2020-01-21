#include <stdio.h>
#include "string.h"
int main(int argc, char **argv) {
  char *s1 = "Hello World!";
  char *s2 = "Hello Boy!";
  int cmp = strcmp(s1, s2);
  printf("%s cmp %s is %d\n", s1, s2, cmp);
  return 0;
}
