#include "./displays/add_new_line.c"
#include "./displays/app_description.c"
#include "./displays/clear_terminal.c"
#include "./elements/get_hydrogen_details.c"
#include "./inputs/get_input.c"
#include "./inputs/get_lowercase_input.c"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char *input;
  char *lowercase_input;

  // Clean up the screen.
  clear_terminal();
  add_new_line();
  add_new_line();
  add_new_line();

  // Show the name of the tool and include some description.
  app_description();

  // Handle the input.
  add_new_line();
  input = get_input();
  lowercase_input = get_lowercase_input(input);

  // Display correct details.
  if (is_hydrogen(lowercase_input) == 1) {
    get_hydrogen_details();
  }

  // Add some spaces before the exit.
  add_new_line();
  add_new_line();
  add_new_line();

  return 0;
}
