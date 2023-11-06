#include <stdio.h>

int main () {
  float c;
  scanf("%f", &c);
  double f = c*9/5+32;
  printf("%0.1f", f);
  return 0;
}
