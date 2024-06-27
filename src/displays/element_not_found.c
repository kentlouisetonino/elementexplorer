#include "./add_new_tab.h"
#include "./color_codes.h"
#include <stdio.h>

void element_not_found(void) {
  add_new_tab();
  add_new_tab();
  printf("%sERROR: Element not found.%s", RED, RESET);
}
