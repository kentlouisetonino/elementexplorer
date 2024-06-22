#include "./displays/add_new_line.c"
#include "./displays/app_description.c"
#include "./displays/clear_terminal.c"
#include "./inputs/get_input.c"
#include <stdio.h>

int main(void) {
  // Clean up the screen.
  clear_terminal();
  add_new_line();
  add_new_line();
  add_new_line();

  // Show the name of the tool and include some description.
  app_description();

  // Handle the input.
  add_new_line();
  get_input();

  // Test the input.
  add_new_line();

  // Add some spaces before the exit.
  add_new_line();
  add_new_line();
  add_new_line();

  return 0;
}
