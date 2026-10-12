#include <stdio.h>

int main(void){
  char text[] = "hi";
  char *zVal = text;

  printf("sizeof(int)   = %zu\n", sizeof(int));
  printf("sizeof(zVal)  = %zu\n", sizeof zVal);
  printf("sizeof(*zVal) = %zu\n", sizeof *zVal);
  printf("zVal          = %p\n", (void *)zVal);
  printf("*zVal         = %c\n", *zVal);
  printf("*(zVal + 1)   = %c\n", *(zVal + 1));
  return 0;
}
