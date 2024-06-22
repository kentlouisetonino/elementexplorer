#include <stdio.h>

// Function prototypes for functions already imported in main.
void add_new_tab(void);

void get_input(char *input) {
  add_new_tab();
  add_new_tab();
  printf("Enter element symbol or name: ");
  fgets(input, 100, stdin);
}
