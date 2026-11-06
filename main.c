#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Bug 1: Memory leak (buffer is never freed) */
  void memory_leak(void) {
      char *buffer = malloc(100);
      if (buffer == NULL) return;
      strcpy(buffer, "hello");
      printf("%s\n", buffer);
  }
