#include <stdio.h>

// Function Prototype
double fToC(int fahr);

// Main
main ()
{
  int fahr;

  for( fahr=300; fahr >= 0; fahr-=20) {
    printf("%3d %6.1f\n", fahr, fToC(fahr)); // Function call
  }
}

// Function
double fToC(int fahr) {
  return (5.0/9.0)*(fahr-32);
}
