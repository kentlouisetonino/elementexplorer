#include <stdio.h>
#include <string.h>

int is_hydrogen(char *input) {
  int is_hydrogen_symbol = strcmp(input, "h");
  int is_hydrogen_name = strcmp(input, "hydrogen");

  if (is_hydrogen_symbol == 0) {
    return 1;
  }

  if (is_hydrogen_name == 0) {
    return 1;
  }

  return 0;
}

int is_helium(char *input) {
  int is_hydrogen_symbol = strcmp(input, "he");
  int is_hydrogen_name = strcmp(input, "helium");

  if (is_hydrogen_symbol == 0) {
    return 1;
  }

  if (is_hydrogen_name == 0) {
    return 1;
  }

  return 0;
}

int is_lithium(char *input) {
  int is_hydrogen_symbol = strcmp(input, "li");
  int is_hydrogen_name = strcmp(input, "lithium");

  if (is_hydrogen_symbol == 0) {
    return 1;
  }

  if (is_hydrogen_name == 0) {
    return 1;
  }

  return 0;
}

int is_beryllium(char *input) {
  int is_hydrogen_symbol = strcmp(input, "be");
  int is_hydrogen_name = strcmp(input, "beryllium");

  if (is_hydrogen_symbol == 0) {
    return 1;
  }

  if (is_hydrogen_name == 0) {
    return 1;
  }

  return 0;
}

int is_boron(char *input) {
  int is_hydrogen_symbol = strcmp(input, "b");
  int is_hydrogen_name = strcmp(input, "boron");

  if (is_hydrogen_symbol == 0) {
    return 1;
  }

  if (is_hydrogen_name == 0) {
    return 1;
  }

  return 0;
}

int is_carbon(char *input) {
  int is_hydrogen_symbol = strcmp(input, "c");
  int is_hydrogen_name = strcmp(input, "carbon");

  if (is_hydrogen_symbol == 0) {
    return 1;
  }

  if (is_hydrogen_name == 0) {
    return 1;
  }

  return 0;
}

int is_nitrogen(char *input) {
  int is_hydrogen_symbol = strcmp(input, "n");
  int is_hydrogen_name = strcmp(input, "nitrogen");

  if (is_hydrogen_symbol == 0) {
    return 1;
  }

  if (is_hydrogen_name == 0) {
    return 1;
  }

  return 0;
}
