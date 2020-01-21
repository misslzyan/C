#include "string.h"
#include <stdio.h>
int main(int argc, char **argv) {
  char *s = "Hello World!";
  int c = 'W';
  char *r = strchr(s, c);
  printf("%s\n", r);
  return 0;
}
