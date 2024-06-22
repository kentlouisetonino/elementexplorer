#include "./add_new_tab.c"
#include "./color_codes.c"
#include <stdio.h>

// Include a function prototype for those functions already imported in main.
void add_new_line(void);

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
  printf("----------------------------------------------\n");
  add_new_line();
}
