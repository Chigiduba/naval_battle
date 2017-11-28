#include <stdio.h>
#include "printSea.c"
#include "check.c"
#include "populate.c"

//a ship can go over the left or right border and reappear
//on the right or left border, respectively,
//because the sea has to be considered as a cylinder
//A ship cannot go from the upper border to the lower border, for the same reason
int main() {
  int user_sea[100] = {0};
  int comp_sea[100] = {0};

  printf("Your sea\n\n");
  printSea(user_sea);

  printf("\n\n");

  printf("Computer's sea\n\n");
  printSea(comp_sea);

  int  xCoord = 0, yCoord = 0;
  int choice_dir = 0;
  int ship_size = 0;
  int flag = 1;
  int arr_pos = 0;

  for ( ship_size = 2; ship_size < 9; ship_size++ ) {
    flag = 1;
    while(flag == 1) {
      do {
        printf("Instert ship of size %d\n[x coordinate]\n", ship_size);
        scanf("%d", &xCoord);
        if(xCoord < 0 || xCoord >= 10 ) {
          printf("has to be 0-9\n");
        }
      }while(xCoord < 0 || xCoord >= 10);

      do {
        printf("[y coordinate]");
        scanf(" %d", &yCoord);
        if(yCoord < 0 || yCoord >= 10 ) {
          printf("has to be 0-9\n");
        }
      }while(yCoord < 0 || yCoord >= 10);

      printf("what direction? [1:north; 2:south; 3:west; 4:east]");
      scanf(" %d", &choice_dir);

      arr_pos = xCoord + yCoord * 10; //the actual position on the array, translated from coordinates

      flag = check(user_sea, arr_pos, choice_dir, ship_size);

      if ( flag == 0 ) {
        //a bit of code redundance here
        populate(user_sea, arr_pos, choice_dir, ship_size);
      }
    }
    printSea(user_sea);
  }



  return 0;
}
