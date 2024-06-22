#include "./displays/add_new_line.c"
#include "./displays/app_description.c"
#include "./displays/clear_terminal.c"
#include "./inputs/get_input.c"
#include <stdio.h>

// Function prototypes.
void add_new_tab(void);
void add_new_line(void);
void clear_terminal(void);
void add_description(void);

int main(void) {
  char *input;

  // Clean up the screen.
  clear_terminal();
  add_new_line();
  add_new_line();
  add_new_line();

  // Show the name of the tool and include some description.
  app_description();

  // Handle the input.
  add_new_line();
  get_input(input);

  // Test the input.
  add_new_line();
  printf("\t\t%s", input);

  // Add some spaces before the exit.
  add_new_line();
  add_new_line();
  add_new_line();

  return 0;
}
