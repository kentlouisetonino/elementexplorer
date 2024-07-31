#include "displays/add_new_line.h"
#include "displays/app_description.h"
#include "displays/app_exit.h"
#include "displays/clear_terminal.h"
#include "displays/element_not_found.h"
#include "elements/element_array.h"
#include "elements/element_input_match.h"
#include "elements/element_type.h"
#include "elements/get_element_details.h"
#include "inputs/get_input.h"
#include "inputs/get_lowercase_input.h"
#include "inputs/get_retry_input.h"

int main(void) {
  int try_again = 1;
  char *input;
  char *lowercase_input;
  int no_match = 1;

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
    add_new_line();

    // Display correct details.
    for (int i = 0; i < (sizeof(elements) / sizeof(element)); i++) {
      element current_element = elements[i];
      char *current_symbol = current_element.symbol;
      char *current_name = current_element.name;

      if (element_input_match(lowercase_input, current_symbol, current_name)) {
        get_element_details(current_element.element_details);
        no_match = 0;
        break;
      }
    }

    if (no_match) {
      element_not_found();
    }

    // Ask user if want to try again | .
    add_new_line();
    add_new_line();
    try_again = get_retry_input();
    no_match = 1;
  }

  // Add some spaces before the exit.
  add_new_line();
  app_exit();
  add_new_line();
  add_new_line();

  return 0;
}
