#include <stdio.h>

main()
{
  int c; 
  long lines, blanks, tabs;
  
  lines = 0;
  blanks = 0;
  tabs = 0;

  while((c = getchar()) != EOF) {
    if(c == '\n') {
      ++lines;
//      printf("hit line\n");
    }
    else if(c == ' ') {
      ++blanks;
//      printf("hit blank\n");
    }
    else if(c == '\t') {
      ++tabs;
//      printf("hit tab\n");
    }
  }
  printf("Lines = %ld, Blanks = %ld, Tabs = %ld\n", lines, blanks, tabs);
}
