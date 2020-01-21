#ifndef _STRING_H
#define _STRING_H
#include <stdio.h>
size_t strlen(const char*s) {
  const char *p = s;
  while(*p!='\0'){
    p++;
  }
  return p - s;
}
char * strcpy( char *restrict s1, const char *restrict s2){
  char *dst = s1;
  const char *src = s2;
  /*Do the copy in a loop.*/
  while((*dst++=*src++)!='\0');
  return s1;
}
char * (strcat)(char *restrict s1, const char *restrict s2){
  char *dst = s1;
  /*move pointer to the end of s1*/
  while(*dst)
    dst++;
  strcpy(dst, s2);
  return s1;
}
#endif
