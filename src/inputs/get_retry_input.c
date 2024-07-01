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

  if (strcmp(retry_input, "y") == 0 || strcmp(retry_input, "yes") == 0) {
    return 1;
  } else {
    add_new_tab();
    add_new_tab();
    printf(" Good Bye! 😀");
    exit(0);
  }

  return 0;
}
