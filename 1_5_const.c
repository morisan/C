#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP  20

/* Farhenheit-Celsius conversion table, 300 to 0F */

main ()
{
  int fahr;

  for( fahr=UPPER; fahr >= LOWER; fahr-=STEP) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
}
