#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *get_lowercase_input(char *input) {
  int input_length = strlen(input);

  // Convert to lowercase.
  for (int i = 0; i < input_length; i++) {
    input[i] = tolower(input[i]);
  }

  return input;
}
