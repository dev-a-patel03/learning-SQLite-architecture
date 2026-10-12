#include <stdio.h>
#include <stdint.h>

int main(void){
  int age = 25;
  int *p = &age;
  uintptr_t n = (uintptr_t)p;   /* the address as a plain number */

  printf("hex     : %p\n", (void *)p);
  printf("decimal : %ju\n", (uintmax_t)n);
  printf("size    : %zu bytes\n", sizeof p);
  printf("NULL    : %ju\n", (uintmax_t)(uintptr_t)NULL);
  return 0;
}
