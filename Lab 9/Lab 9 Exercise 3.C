#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car {
  char make[50];
  char model[50];
  char colour[50];
  int year;
  struct car *next;
} car;

int main(void) {
  car *head, *next_car;
  char mk[50], mdl[50], clr[50];
  int y, b = 1;
  head = NULL;
  head = (car *)malloc(sizeof(car));
  printf("Enter make: ");
  fgets(head->make, sizeof(mk), stdin);
  mk[strlen(mk) - 1] = '\0';
  printf("\nEnter model name: ");
  fgets(head->model, sizeof(mdl), stdin);
  mdl[strlen(mdl) - 1] = '\0';
  printf("\nEnter colour: ");
  fgets(head->colour, sizeof(clr), stdin);
  clr[strlen(clr) - 1] = '\0';
  printf("\nEnter year: ");
  scanf("%d", &head->year);

  printf("\nContinue ? ");
  scanf("%d", &b);

  while (b) {
    next_car = (car *)malloc(sizeof(car));
    strcpy(next_car->make, mk);
    strcpy(next_car->model, mdl);
    strcpy(next_car->colour, clr);
    next_car->year = y;
    next_car->next = head;

    head = next_car;
    printf("\nEnter make: ");
    scanf("%s", next_car->make);
    // printf("\n%d", b);

    printf("\nEnter model name: ");
    scanf("%s", next_car->model);
    printf("\nEnter colour: ");
    scanf("%s", next_car->colour);
    printf("\nEnter year: ");
    scanf("%d", &next_car->year);

    printf("\nContinue ? ");
    scanf("%d", &b);
  }

  next_car = head;
  while (next_car != NULL && !strcmp(next_car->colour, "yellow") &&
         next_car->year >= 2010) {
    printf("\n\nMake: %s\nModel: %s\nColour: %s\nYear: %d", next_car->make,
           next_car->model, next_car->colour, next_car->year);
    // printf("\nMake: %s", next_car->make);
    next_car = next_car->next;
  }
}