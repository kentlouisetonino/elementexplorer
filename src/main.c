#include "./display/add_new_line.c"
#include "./display/app_description.c"
#include "./display/clear_terminal.c"
#include <stdio.h>

int main(void) {
  // Clean up the screen.
  clear_terminal();
  add_new_line();
  add_new_line();

  app_description();

  // Add new line before exit.
  add_new_line();
  add_new_line();

  return 0;
}
