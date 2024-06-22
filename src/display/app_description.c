#include "./add_new_tab.c"
#include "./color_codes.c"
#include <stdio.h>

// Function prototypes.
void add_new_line(void);
void add_new_tab(void);

void app_description(void) {
  add_new_tab();
  add_new_tab();
  printf("%s----------------------------------------------%s", BLUE, RESET);
  add_new_line();
  add_new_line();
  add_new_tab();
  add_new_tab();
  add_new_tab();
  add_new_tab();
  printf("ElementExplorer\n");
  add_new_line();
  add_new_tab();
  add_new_tab();
  printf("%s----------------------------------------------%s\n", BLUE, RESET);
  add_new_line();
}
