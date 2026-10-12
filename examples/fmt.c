#include <stdio.h>
#include <stdint.h>

int main(void){
  int n = 255;
  printf("[%%d]    %d\n", -42);
  printf("[%%u]    %u\n", 42u);
  printf("[%%x]    %x\n", n);
  printf("[%%X]    %X\n", n);
  printf("[%%c]    %c\n", 'h');
  printf("[%%s]    %s\n", "hello");
  printf("[%%f]    %f\n", 3.14159);
  printf("[%%p]    %p\n", (void *)&n);
  printf("[%%ld]   %ld\n", 9000000000L);
  printf("[%%lld]  %lld\n", 9000000000LL);
  printf("[%%zu]   %zu\n", sizeof(double));
  printf("[%%ju]   %ju\n", (uintmax_t)123);
  printf("[%%5d]   [%5d]\n", 42);
  printf("[%%-5d]  [%-5d]\n", 42);
  printf("[%%05d]  [%05d]\n", 42);
  printf("[%%.2f]  %.2f\n", 3.14159);
  printf("[%%%%]    %%\n");
  return 0;
}
