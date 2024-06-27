#include "./displays/add_new_line.c"
#include "./displays/app_description.c"
#include "./displays/clear_terminal.c"
#include "./displays/element_not_found.c"
#include "./elements/element_data.h"
#include "./elements/element_input_checker.h"
#include "./elements/element_type.h"
#include "./elements/get_element_details.h"
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
      get_element_details(&hydrogen);
      add_new_line();
    } else if (is_helium(lowercase_input) == 1) {
      add_new_line();
      get_element_details(&helium);
      add_new_line();
    } else if (is_lithium(lowercase_input) == 1) {
      add_new_line();
      get_element_details(&lithium);
      add_new_line();
    } else {
      add_new_line();
      element_not_found();
      add_new_line();
    }

    // Ask user if want to try again | .
    add_new_line();
    try_again = get_retry_input();
  }

  // Add some spaces before the exit.
  add_new_line();
  add_new_line();

  return 0;
}
