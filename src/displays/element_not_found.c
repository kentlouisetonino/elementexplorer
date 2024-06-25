#include "./color_codes.c"
#include <stdio.h>

// Function prototype.
void add_new_tab(void);

void element_not_found(void) {
  add_new_tab();
  add_new_tab();
  printf("%sERROR: Element not found.%s", RED, RESET);
}
