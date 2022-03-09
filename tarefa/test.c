#include <stdio.h>

int main(){

  char a[] = "hello";
  char b[] = "bioooongoo";

  a[0] = b[0];

  printf("%s\n", a);

  return 0;
}