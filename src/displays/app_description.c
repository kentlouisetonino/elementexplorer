#include "./add_new_line.h"
#include "./add_new_tab.h"
#include "./color_codes.h"

void app_description(void) {
  add_new_tab();
  add_new_tab();
  printf("%s------------------------------------------------%s", BLUE, RESET);
  add_new_line();
  add_new_line();
  add_new_tab();
  add_new_tab();
  add_new_tab();
  add_new_tab();
  printf("%sElementExplorer%s", GREEN, RESET);
  add_new_line();
  add_new_line();
  add_new_tab();
  add_new_tab();
  add_new_tab();
  printf("A CLI tool for Element details.");
  add_new_line();
  add_new_line();
  add_new_tab();
  add_new_tab();
  printf("%s------------------------------------------------%s\n", BLUE, RESET);
}
