#include <stdio.h>

/* one word per line */

main ()
{
  int c, ws;

  ws = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\t' || c == '\n')
      ++ws;
    else {
      if (ws > 0) {
        printf("\n");
        ws = 0;
      }
      putchar(c);        
      printf("\n");
    }
  }
}
