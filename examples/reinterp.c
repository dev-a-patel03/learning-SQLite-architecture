#include <stdio.h>
#include <string.h>

int main(void){
  float f = 1.0f;
  int asInt;
  memcpy(&asInt, &f, sizeof asInt);   /* copy the raw 4 bytes, no conversion */
  printf("float value      : %f\n", f);
  printf("same bytes as int: %d\n", asInt);
  return 0;
}
