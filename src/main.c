#include "./displays/add_new_line.c"
#include "./displays/app_description.c"
#include "./displays/clear_terminal.c"
#include "./displays/element_not_found.c"
#include "./elements/get_hydrogen_details.c"
#include "./inputs/get_input.c"
#include "./inputs/get_lowercase_input.c"
#include "./inputs/get_retry_input.c"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  int try_again = 1;
  char *input;
  char *lowercase_input;

  while (try_again == 1) {
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
      add_new_line();
      get_hydrogen_details();
      add_new_line();
    } else {
      add_new_line();
      element_not_found();
      add_new_line();
    }

    // Ask user if want to try again.
    add_new_line();
    try_again = get_retry_input();
  }

  // Add some spaces before the exit.
  add_new_line();
  add_new_line();

  return 0;
}
