#include <stdio.h>

/* declare a buffer, size 2048 */
static char input[2048];

int main(int argc, char** argv) {
  /*print version and exit information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctl C to continue");

  /* reader loop */
  while (1) {

    /* output the prompt */
    fputs("Lispy> ", stdout);

    /* Read a line of user input up to size 2048 */
    fgets(input, 2048, stdin);

    /* Echo input back to user */
    printf("No you're a %s", input);
  }

  return 0;
}
