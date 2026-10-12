// int main(void){ int x = 5
//  return 0; }


#include <stdio.h>

void f(void){ int x = 12345; }
void g(void){ int y; printf("y = %d\n", y); }

int main(void){
  f();
  g();
  return 0;
}