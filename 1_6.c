#include <stdio.h>

main()
{
  int c;

  if((c = getchar()) != EOF)
    printf("getchar() != EOF is 1\n");
  else
    printf("getchar() != EOF is 0\n");
}
