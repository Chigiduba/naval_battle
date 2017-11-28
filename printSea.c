#include <stdio.h>

void printSea( int* sea ) {
  int i,j;
  for ( i = 0; i < 10; i++ ) {
    for ( j = 0; j < 10; j++) {
      printf("%d  ", sea[ j + i*10 ]);
    }
    printf("\n\n");
  }
}
