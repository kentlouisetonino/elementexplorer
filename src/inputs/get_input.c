#include <stdio.h>
#include <stdlib.h>

// Function prototypes for functions already imported in main.
void add_new_tab(void);
void add_new_line(void);

char *get_input() {
  // Allocate memory pointer.
  char *draftInput = malloc(sizeof(char) * 100);

  add_new_tab();
  add_new_tab();
  printf("Enter Element (Symbol | Name): ");
  fgets(draftInput, 100, stdin);

  return draftInput;
}
