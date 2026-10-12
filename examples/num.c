#include <stdio.h>

int main(void){
  int nums[2] = {12, 50};
  int *num1 = nums;

  printf("num1         = %p\n", (void *)num1);
  printf("num1 + 1     = %p\n", (void *)(num1 + 1));
  printf("*num1        = %d\n", *num1);
  printf("*num1 + 1    = %d\n", *num1 + 1);
  printf("*(num1 + 1)  = %d\n", *(num1 + 1));
  return 0;
}
