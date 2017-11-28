#include <stdio.h>

int check(int* sea, int pos, int dir, int length) {
  int final_pos;
  int seaSize = sizeof(sea) / sizeof(int);
  switch (dir) {
    case 1:
      final_pos = pos + 10 * (length-1);
      //variable to hold the position of the furthest bit of the ship, used to check if it is available in the array
      if(final_pos > seaSize ) {
        return 1;
        break;
      }
      else {
        return 0;
        break;
      }

    case 2:
      final_pos = pos - 10 * (length-1);
      if (final_pos <= 0 ) {
        return 1;
        break;
      }
      else {
        return 0;
        break;
      }

      case 3:
      final_pos = pos - (length - 1);
      if ( final_pos <= 0 ) {
        return 1;
        break;
      }
      else {
        return 0;
        break;
      }

      case 4:
        final_pos = pos + (length-1);
        if ( final_pos > seaSize) {
          return 1;
          break;
        }
        else {
          return 0;
          break;
        }
    }
}
