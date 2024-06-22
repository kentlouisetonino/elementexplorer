#include <stdio.h>

// Function prototypes for functions already imported in main.
void add_new_tab(void);
void add_new_line(void);

void get_input() {
  char *draftInput;

  add_new_tab();
  add_new_tab();
  printf("Enter element symbol or name: ");
  fgets(draftInput, 100, stdin);

  add_new_line();
  printf("%s", draftInput);
}
