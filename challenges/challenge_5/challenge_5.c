/*
 * Can you execve("/bin/sh", ...) ?
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BANNER \
  "Welcome to Challenge 5"

char *gets(char *);

void start_level() {
  char buffer[528];
  gets(buffer);
}

int main(int argc, char **argv) {
  printf("%s\n", BANNER);
  start_level();
}