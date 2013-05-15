#include <stdio.h>

/* Horizontal histogram (graph) representation of each word length */

main ()
{
  int c, i, ws, wordLength, wordCount;

  ws = wordLength = wordCount = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\t' || c == '\n') {
      if(wordLength > 0) {
        printf("%3d:", ++wordCount);
        for(i=0; i < wordLength; ++i) {
          printf("[]");
        }
        printf("\n");
        wordLength=0;
      }
    }
    else { // In Word
      ++wordLength;
    }
  }
}
