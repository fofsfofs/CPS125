#include <math.h>
#include <stdio.h>

struct shape {
  float line;
  float radius;
  float areacircle;
  float areacylinder;
  float volumecylinder;
};

int main(void) {
  struct shape cylinder;

  printf("Enter the height: ");
  scanf("%f", &cylinder.line);
  printf("Enter the radius: ");
  scanf("%f", &cylinder.radius);

  cylinder.areacircle = acos(-1) * pow(cylinder.radius, 2);
  cylinder.areacylinder = 2 * acos(-1) * cylinder.radius * cylinder.line + 2 * cylinder.areacircle;
  cylinder.volumecylinder = cylinder.areacircle * cylinder.line;

  printf("\nThe area of the cross sectional circle: %f", cylinder.areacircle);
  printf("\nThe surface area: %f", cylinder.areacylinder);
  printf("\nThe volume: %f", cylinder.volumecylinder);
}
