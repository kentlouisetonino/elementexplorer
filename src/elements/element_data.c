#include "./element_type.h"

struct element_type hydrogen = {
    "H",
    "Hydrogen",
    "1",
    "Nonmetal",
    "1.0080 u",
    "Gas",
    "1s1",
    "+1, -1",
    "2.2",
    "120 pm",
    "13.598 eV",
    "0.754 eV",
    "13.81 K",
    "20.28 K",
    "0.00008988 g/cm³",
    "Henry Cavendish (1766)",
};

/*
struct element_type {
  char *symbol;
  char *name;
  char *atomic_number;
  char *chemical_group_block;
  char *atomic_mass;
  char *standard_state;
  char *electron_configuration;
  char *oxidation_states;
  char *electronegativity;
  char *atomic_radius;
  char *ionization_energy;
  char *electron_affinity;
  char *melting_point;
  char *boiling_point;
  char *density;
  char *discovered_by;
};
*/
struct element_type lithium = {
    "Li",       "Lithium", "3",           "Alkali Metal",
    "7.0 u",    "Solid",   "[He]2s1",     "+1",
    "0.98",     "182 pm",  "5.392 eV",    "0.618 eV",
    "453.65 K", "1615 K",  "0.534 g/cm³", "Johan August Arfwedson (1817)",
};
