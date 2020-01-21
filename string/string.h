#ifndef _STRING_H
#define _STRING_H
#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n) {
  unsigned char uch1;
  unsigned char uch2;
  if (n == 0)
    return 0;
  while ( n-->0 && *s1 == *s2) {
    if (n==0 || *s1 == '\0') {
      return 0;
    }
    s1++;
    s2++;
  }
  uch1 = (*(unsigned char *)s1);
  uch2 = (*(unsigned char *)s2);
  return uch1 < uch2 ? -1 : (uch1 > uch2);
}

int strcmp(const char *s1, const char *s2) {
  unsigned char uch1;
  unsigned char uch2;
  while (*s1 != '\0' && *s1 == *s2) {
    s1++;
    s2++;
  }
  uch1 = (*(unsigned char*) s1);
  uch2 = (*(unsigned char*) s2);
  return uch1 < uch2 ? -1 : (uch1 > uch2);
}

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

char * strncpy(char *restrict s1, const char *restrict s2, size_t n) {
  char *dst = s1;
  const char *src = s2;
  while(n-->0&&(*dst++ = *src++));
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

char *(strchr)(const char *s, int c) {
  char ch = c;
  while (*s != '\0' && *s != ch) {
    s++;
  }
  return (*s == ch) ? (char *) s : NULL;
} 
#endif
