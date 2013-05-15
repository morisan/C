#include <stdio.h>

main ()
{
  printf("Hello World!\c");
  // This creates compiler error!!
  // 1_2.c: In function ‘main’:
  // 1_2.c:5:10: warning: unknown escape sequence: '\c' [enabled by default]
}
