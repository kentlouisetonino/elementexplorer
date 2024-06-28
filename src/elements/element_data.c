#include "./element_type.h"
#include <stdio.h>

struct element_type hydrogen = {
    "H",         "Hydrogen", "1",       "Nonmetal", "1.0080 u",
    "Gas",       "1s1",      "+1, -1",  "2.2",      "120 pm",
    "13.598 eV", "0.754 eV", "13.81 K", "20.28 K",  "0.00008988 g/cm³",
    "1766",
};

struct element_type helium = {
    "He",           "Helium", "2",      "Noble Gas", "4.00260 u",
    "Gas",          "1s2",    "0",      "N/A",       "140 pm",
    "	24.587 eV", "N/A",    "0.95 K", "4.22 K",    "0.0001785 g/cm³",
    "1868",
};

struct element_type lithium = {
    "Li",       "Lithium", "3",           "Alkali Metal",
    "7.0 u",    "Solid",   "[He] 2s1",    "+1",
    "0.98",     "182 pm",  "5.392 eV",    "0.618 eV",
    "453.65 K", "1615 K",  "0.534 g/cm³", "1817",
};

struct element_type beryllium = {
    "Be",         "Beryllium", "4",          "Alkaline Earth Metal",
    "9.012183 u", "Solid",     "[He]2s2",    "+2",
    "1.57",       "153 pm",    "9.323 eV",   "N/A",
    "1560 K",     "2744 K",    "1.85 g/cm³", "1798",
};

struct element_type boron = {
    "B",        "Boron",        "5",      "Metalloid", "10.81 u",
    "Solid",    "[He] 2s2 2p1", "+3",     "2.04",      "192 pm",
    "8.298 eV", "0.277 eV",     "2348 K", "4273 K",    "2.37 g/cm³",
    "1808",
};

struct element_type carbon = {
    "C",         "Carbon",       "6",          "Nonmetal", "12.011 u",
    "Solid",     "[He] 2s2 2p2", "+4, +2, -4", "2.55",     "170 pm",
    "11.260 eV", "1.263 eV",     "3823 K",     "4098 K",   "2.2670 g/cm³",
    "Ancient",
};

struct element_type nitrogen = {
    "N",
    "Nitrogen",
    "7",
    "Nonmetal",
    "14.007 u",
    "Gas",
    "[He] 2s2 2p3",
    "+5, +4, +3, +2, +1, -1, -2, -3",
    "3.04",
    "155 pm",
    "14.534 eV",
    "N/A",
    "63.15 K",
    "77.36 K",
    "0.0012506 g/cm³",
    "1772",
};

struct element_type oxygen = {
    "O",         "Oxygen",       "8",       "Nonmetal", "15.999 u",
    "Gas",       "[He] 2s2 2p4", "-2",      "3.44",     "152 pm",
    "13.618 eV", "1.461 eV",     "54.36 K", "90.2 K",   "0.001429 g/cm³",
    "1774",
};

struct element_type fluorine = {
    "F",         "Fluorine",     "9",       "Halogen", "18.99840316 u",
    "Gas",       "[He] 2s2 2p5", "-1",      "3.98",    "135 pm",
    "17.423 eV", "3.339 eV",     "53.53 K", "85.03 K", "0.001696 g/cm³",
    "1670",
};

struct element_type neon = {
    "Ne",        "Neon",         "10",      "Noble Gas", "20.180 u",
    "Gas",       "[He] 2s2 2p6", "0",       "N/Au",      "154 pm",
    "21.565 eV", "N/A",          "24.56 K", "27.07 K",   "0.0008999 g/cm³",
    "1898",
};
