#include "./displays/add_new_line.h"
#include "./displays/app_description.h"
#include "./displays/clear_terminal.h"
#include "./displays/element_not_found.h"
#include "./elements/element_data.h"
#include "./elements/element_input_match.h"
#include "./elements/element_type.h"
#include "./elements/get_element_details.h"
#include "./inputs/get_input.h"
#include "./inputs/get_lowercase_input.h"
#include "./inputs/get_retry_input.h"
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
    add_new_line();

    // Display correct details.
    if (element_input_match(lowercase_input, "h", "hydrogen")) {
      get_element_details(&hydrogen);
    } else if (element_input_match(lowercase_input, "h", "helium")) {
      get_element_details(&helium);
    } else if (element_input_match(lowercase_input, "li", "lithium")) {
      get_element_details(&lithium);
    } else if (element_input_match(lowercase_input, "be", "beryllium")) {
      get_element_details(&beryllium);
    } else if (element_input_match(lowercase_input, "b", "boron")) {
      get_element_details(&boron);
    } else if (element_input_match(lowercase_input, "c", "carbon")) {
      get_element_details(&carbon);
    } else if (element_input_match(lowercase_input, "n", "nitrogen")) {
      get_element_details(&nitrogen);
    } else if (element_input_match(lowercase_input, "o", "oxygen")) {
      get_element_details(&oxygen);
    } else if (element_input_match(lowercase_input, "f", "fluorine")) {
      get_element_details(&fluorine);
    } else if (element_input_match(lowercase_input, "ne", "neon")) {
      get_element_details(&neon);
    } else if (element_input_match(lowercase_input, "na", "sodium")) {
      get_element_details(&sodium);
    } else if (element_input_match(lowercase_input, "mg", "magnesium")) {
      get_element_details(&magnesium);
    } else if (element_input_match(lowercase_input, "al", "aluminum")) {
      get_element_details(&aluminum);
    } else {
      element_not_found();
    }

    // Ask user if want to try again | .
    add_new_line();
    add_new_line();
    try_again = get_retry_input();
  }

  // Add some spaces before the exit.
  add_new_line();
  add_new_line();

  return 0;
}
