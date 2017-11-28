#include <stdio.h>

void populate(int *sea, int pos, int dir, int length) {
  int final_pos;
  switch (dir) {
    int i=0;
    case 1:
    final_pos = pos - 10 * (length-1);
      //variable to hold the position of the furthest bit of the ship, used to check if it is available in the array
      for (i = pos; i >= final_pos; i -= 10 ) {
        sea[i] = 1;
      }
      break;

    case 2:
      final_pos = pos + 10 * (length-1);
      for( i = pos; i <= final_pos; i += 10 ) {
        sea[i] = 1;
      }
      break;

      case 3:
      final_pos = pos - (length - 1);
      for( i = pos; i >= final_pos; i-- ) {
        sea[i] = 1;
      }
      break;

      case 4:
      final_pos = pos - (length - 1);
      for( i = pos; i <= final_pos; i++ ) {
        sea[i] = 1;
      }
      break;
    }
}
