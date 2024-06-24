#include "../displays/color_codes.c"
#include <stdio.h>

// Function prototypes.
void add_new_tab(void);
void add_new_line(void);

void get_hydrogen_details(void) {
  // Display symbol.
  add_new_tab();
  add_new_tab();
  printf("%sSymbol%s: %sH%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display name.
  add_new_tab();
  add_new_tab();
  printf("%sName%s: %sHydrogen%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display atomic number.
  add_new_tab();
  add_new_tab();
  printf("%sAtomic Number%s: %s1%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display chemical group block.
  add_new_tab();
  add_new_tab();
  printf("%sChemical Group Block%s: %sNonmetal%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display atomic mass.
  add_new_tab();
  add_new_tab();
  printf("%sAtomic Mass%s: %s1.0080 u%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display standard state.
  add_new_tab();
  add_new_tab();
  printf("%sStandard State%s: %sGas%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display electron configuration.
  add_new_tab();
  add_new_tab();
  printf("%sElectron Configuration%s: %s1s1%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display oxidation states.
  add_new_tab();
  add_new_tab();
  printf("%sOxidation States%s: %s+1, -1%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display electronegativity (pauling scale).
  add_new_tab();
  add_new_tab();
  printf("%sElectronegativity (Pauling Scale)%s: %s2.2%s", BLUE, RESET, YELLOW,
         RESET);
  add_new_line();

  // Display atomic radius (van der Waals).
  add_new_tab();
  add_new_tab();
  printf("%sAtomic Radius (Van Der Waals)%s: %s120 pm%s", BLUE, RESET, YELLOW,
         RESET);
  add_new_line();

  // Display ionization energy.
  add_new_tab();
  add_new_tab();
  printf("%sIonization Energy%s: %s13.598 eV%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display electron affinity.
  add_new_tab();
  add_new_tab();
  printf("%sElectron Affinity%s: %s0.754 eV%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display melting point.
  add_new_tab();
  add_new_tab();
  printf("%sMelting Point%s: %s20.28 K%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display density.
  add_new_tab();
  add_new_tab();
  printf("%sDensity%s: %s0.00008988 g/cm³%s", BLUE, RESET, YELLOW, RESET);
  add_new_line();

  // Display year discovered.
  add_new_tab();
  add_new_tab();
  printf("%sDiscovered By%s: %sHenry Cavendish (1766)%s", BLUE, RESET, YELLOW,
         RESET);
}
