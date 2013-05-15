#include <stdio.h>

/* Horizontal histogram (graph) representation of each word length */

main ()
{
  int c, i, j, nWS, nOtherChar;
  int nDigit[10];

  nWS = nOtherChar = 0;
  for(i=0; i<10; ++i)
    nDigit[i]=0;

  while((c = getchar()) != EOF) {
    if(c == '\n' || c == '\t'|| c == ' ')
      ++nWS;
    else if(c >= '0' && c <= '9')
      ++nDigit[c-'0'];
    else
      ++nOtherChar;
  }
  printf("Histogram of Character occurances (simplified)\n");
  for(i=0; i<10; ++i) {
    printf("%5d: ", i);
    for(j=0; j < nDigit[i]; ++j)
      printf("[]");
    printf("\n");
  }
  printf("   WS: ");
  for(i=0; i<nWS; ++i)
      printf("[]");
  printf("\n");
  printf("Other: ");
  for(i=0; i<nOtherChar; ++i)
      printf("[]");
  printf("\n");
}
