#include "../displays/add_new_tab.h"
#include "./get_lowercase_input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_retry_input(void) {
  char *retry_input = malloc(sizeof(char) * 5);

  add_new_tab();
  add_new_tab();
  printf("Try again (y | n): ");
  fgets(retry_input, 5, stdin);

  char *lower_retry_input = get_lowercase_input(retry_input);

  int is_yes_1 = strcmp(retry_input, "y");
  int is_yes_2 = strcmp(retry_input, "yes");

  if (is_yes_1 == 0) {
    return 1;
  }

  if (is_yes_2 == 0) {
    return 1;
  }

  return 0;
}
