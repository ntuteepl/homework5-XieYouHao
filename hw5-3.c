#include <stdio.h>

int main() {

  int hour, wage;
  scanf("%d%d", &hour, &wage);
  double output = 0;

  while (hour > 0)
  {
    if (hour > 120) {
      output += (hour-120)*wage*1.66;
      hour = 120;
    } else if (hour <= 120 && hour > 60) {
      output += (hour-60)*wage*1.33;
      hour = 60;
    } else if (hour <= 60) {
      output += hour*wage;
      hour = 0;
    } else {
      return 1;
    }
  }
  
  printf("%0.1f", output);
  return 0;
}

