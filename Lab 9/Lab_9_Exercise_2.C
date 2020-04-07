#include <math.h>
#include <stdio.h>

struct strength {
  float p;
  float d;
  float stress;
  float strain;
};

int main(void) {
  struct strength column;

  printf("Enter the compression load (p): ");
  scanf("%f", &column.p);
  printf("Enter the diameter: ");
  scanf("%f", &column.d);

  column.stress = column.p / ((acos(-1) * column.d * column.d) / 4);
  column.strain = column.stress / (30 * pow(10, 6));

  printf("\nThe compression load acting in the column: %f", column.p);
  printf("\nThe diameter of the column: %f", column.d);
  printf("\nThe stress in the column: %f", column.stress);
  printf("\nThe stain in the column: %f", column.strain);
}
