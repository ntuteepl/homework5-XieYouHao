#include <stdio.h>
#include <assert.h>

int main () {
  int hours, minutes;
  scanf("%d%d", &hours, &minutes);
  assert(1<=hours && hours <=12);
  assert(0<=minutes && minutes <=59);
  float hourAngle = (hours*30) + (minutes * 0.5);
  float minuteAngle = minutes * 6;
  float output = 0;
  if (hourAngle > minuteAngle) {
    output = hourAngle - minuteAngle;
  } else {
    output = minuteAngle - hourAngle;
  }
  output = output > 180 ? 360 - output: output;

  printf("%0.3f", output);
  return 0;
}
