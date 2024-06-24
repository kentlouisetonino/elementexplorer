#include "./remove_input_spaces.c"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *get_lowercase_input(char *input) {
  // Cleanup the input first.
  remove_input_spaces(input);

  int input_length = strlen(input);

  // Convert to lowercase.
  for (int i = 0; i < input_length; i++) {
    input[i] = tolower(input[i]);
  }

  return input;
}
