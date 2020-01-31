#include <stdio.h>
#include <stdlib.h>


/* The editline library provides CLI editing functionality, needs -ledit linked via Makefile
 The book is using gcc on Linux and does things a bit differently. OSX uses BSD editline.

If we want this to work on Windows, we need some pre-processor directives (see the book) to fake
a readline function, but I'm not going to complicate things by doing that stuff for the moment. */
#include <editline/readline.h>


int main(int argc, char** argv) {

  /*print version and exit information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctl C to  continue");

  /* reader loop */
  while (1) {

    /* output our prompt and get input, use readline and history to get better CLI behaviour */
    char* input = readline("Lispy> ");

    /* add input to history */
    add_history(input);

    /* Echo input back to user */
    printf("No you're a %s\n", input);

    /* free retrieved input */
    free(input);
  }

  return 0;
}
