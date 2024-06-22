#include "./display/add_new_line.c"
#include "./display/app_description.c"
#include "./display/clear_terminal.c"
#include <stdio.h>

// Function prototypes.
void add_new_tab(void);
void add_new_line(void);
void clear_terminal(void);
void add_description(void);

int main(void) {
  // Clean up the screen.
  clear_terminal();
  add_new_line();
  add_new_line();

  // Show the name of the tool and include some description.
  app_description();

  // Add some spaces before the exit.
  add_new_line();
  add_new_line();

  return 0;
}
