#include <stdio.h>
#include <math.h>

float areaofCircle(float radius) {
  float area = radius*radius*M_PI;
  return area;
}

int main(int argc, char* argv[]) {
  char inString[256];
  float minR, maxR, temp;
  if (argc < 3) {
    printf("Please input the minimum value:\n");
    fgets(inString, 256, stdin);
    sscanf(inString, "%f", &minR);
    printf("Please input the maximum value:\n");
    fgets(inString, 256, stdin);
    sscanf(inString, "%f", &maxR);
  }
  else {
    sscanf(argv[1], "%f", &minR);
    sscanf(argv[2], "%f", &maxR);
  }
  if (minR > maxR) {
      printf("Minimum value is greater than the maximum value, using minimum as maximum\n");
      temp = minR;
      minR = maxR;
      maxR = temp;
    } 
  for (float i = minR; i <= maxR; i++) {
     float solution = areaofCircle(i);
     printf("%f\n", solution);
  }
}
