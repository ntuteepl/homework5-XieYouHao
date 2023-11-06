#include <stdio.h>

int main () {
  int minutes;
  scanf("%d", &minutes);
  double fee = minutes * 0.9;
  if (minutes >= 1500) {
    fee *= 0.79;
  } else if (minutes >= 800) {
    fee *= 0.9;
  }
  printf("%0.1f", fee);
  return 0;
}
