/*
 * The aim is to execute the function complete_level by modifying the
 * saved return address, and pointing it to the complete_level() function.
 *
 * You will note PIE is disabled..
 */

#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BANNER \
  "Welcome to Challenge 3"

char *gets(char *);

void complete_level() {
  printf("Congratulations, you've finished Challenge 3 :-) Well done!\n");
  exit(0);
}

void start_level() {
  char buffer[64];
  void *ret;

  // read up to 100 bytes into the buffer of size 64 <- uhh..?
  read(0, buffer, 100);

  ret = __builtin_return_address(0);
  printf("and will be returning to %p\n", ret);
}

int main(int argc, char **argv) {
  printf("%s\n", BANNER);
  start_level();
}