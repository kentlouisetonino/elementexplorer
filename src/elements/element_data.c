#include "./element_type.h"
#include <stdio.h>

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
    "1766",
    "https://pubchem.ncbi.nlm.nih.gov/element/1",
};

struct element_type helium = {
    "He",
    "Helium",
    "2",
    "Noble Gas",
    "4.00260 u",
    "Gas",
    "1s2",
    "0",
    "N/A",
    "140 pm",
    "	24.587 eV",
    "N/A",
    "0.95 K",
    "4.22 K",
    "0.0001785 g/cm³",
    "1868",
    "https://pubchem.ncbi.nlm.nih.gov/element/2",
};

struct element_type lithium = {
    "Li",
    "Lithium",
    "3",
    "Alkali Metal",
    "7.0 u",
    "Solid",
    "[He] 2s1",
    "+1",
    "0.98",
    "182 pm",
    "5.392 eV",
    "0.618 eV",
    "453.65 K",
    "1615 K",
    "0.534 g/cm³",
    "1817",
    "https://pubchem.ncbi.nlm.nih.gov/element/3",
};

struct element_type beryllium = {
    "Be",
    "Beryllium",
    "4",
    "Alkaline Earth Metal",
    "9.012183 u",
    "Solid",
    "[He]2s2",
    "+2",
    "1.57",
    "153 pm",
    "9.323 eV",
    "N/A",
    "1560 K",
    "2744 K",
    "1.85 g/cm³",
    "1798",
    "https://pubchem.ncbi.nlm.nih.gov/element/4",
};

struct element_type boron = {
    "B",
    "Boron",
    "5",
    "Metalloid",
    "10.81 u",
    "Solid",
    "[He] 2s2 2p1",
    "+3",
    "2.04",
    "192 pm",
    "8.298 eV",
    "0.277 eV",
    "2348 K",
    "4273 K",
    "2.37 g/cm³",
    "1808",
    "https://pubchem.ncbi.nlm.nih.gov/element/5",
};

struct element_type carbon = {
    "C",
    "Carbon",
    "6",
    "Nonmetal",
    "12.011 u",
    "Solid",
    "[He] 2s2 2p2",
    "+4, +2, -4",
    "2.55",
    "170 pm",
    "11.260 eV",
    "1.263 eV",
    "3823 K",
    "4098 K",
    "2.2670 g/cm³",
    "Ancient",
    "https://pubchem.ncbi.nlm.nih.gov/element/6",
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
    "https://pubchem.ncbi.nlm.nih.gov/element/7",
};

struct element_type oxygen = {
    "O",
    "Oxygen",
    "8",
    "Nonmetal",
    "15.999 u",
    "Gas",
    "[He] 2s2 2p4",
    "-2",
    "3.44",
    "152 pm",
    "13.618 eV",
    "1.461 eV",
    "54.36 K",
    "90.2 K",
    "0.001429 g/cm³",
    "1774",
    "https://pubchem.ncbi.nlm.nih.gov/element/8",
};

struct element_type fluorine = {
    "F",
    "Fluorine",
    "9",
    "Halogen",
    "18.99840316 u",
    "Gas",
    "[He] 2s2 2p5",
    "-1",
    "3.98",
    "135 pm",
    "17.423 eV",
    "3.339 eV",
    "53.53 K",
    "85.03 K",
    "0.001696 g/cm³",
    "1670",
    "https://pubchem.ncbi.nlm.nih.gov/element/9",
};

struct element_type neon = {
    "Ne",
    "Neon",
    "10",
    "Noble Gas",
    "20.180 u",
    "Gas",
    "[He] 2s2 2p6",
    "0",
    "N/Au",
    "154 pm",
    "21.565 eV",
    "N/A",
    "24.56 K",
    "27.07 K",
    "0.0008999 g/cm³",
    "1898",
    "https://pubchem.ncbi.nlm.nih.gov/element/10",
};

struct element_type sodium = {
    "Na",
    "Sodium",
    "11",
    "Alkali Metal",
    "22.9897693 u",
    "Solid",
    "[Ne] 3s1",
    "+1",
    "0.93",
    "227 pm",
    "5.139 eV",
    "0.548 eV",
    "370.95 K",
    "1156 K",
    "0.97 g/cm³",
    "1807",
    "https://pubchem.ncbi.nlm.nih.gov/element/11",
};

struct element_type magnesium = {
    "Mg",
    "Magnesium",
    "12",
    "Alkaline Earth Metal",
    "24.305 u",
    "Solid",
    "[Ne] 3s2",
    "+2",
    "1.31",
    "173 pm",
    "7.646 eV",
    "N/A",
    "923 K",
    "1363 K",
    "1.74 g/cm³",
    "1808",
    "https://pubchem.ncbi.nlm.nih.gov/element/12",
};

struct element_type aluminum = {
    "Al",
    "Aluminum",
    "13",
    "Post-Transition Metal",
    "26.981538 u",
    "Solid",
    "[Ne] 3s2 3p1",
    "+3",
    "1.61",
    "184 pm",
    "5.986 eV",
    "0.441 eV",
    "933.437 K",
    "2792 K",
    "2.70 g/cm³",
    "Ancient",
    "https://pubchem.ncbi.nlm.nih.gov/element/13",
};

struct element_type silicon = {
    "Si",
    "Silicon",
    "14",
    "Metalloid",
    "28.085 u",
    "Solid",
    "[Ne] 3s2 3p2",
    "+4, +2, -4",
    "1.9",
    "210 pm",
    "8.152 eV",
    "1.385 eV",
    "1687 K",
    "3538 K",
    "2.3296 g/cm³",
    "1854",
    "https://pubchem.ncbi.nlm.nih.gov/element/14",
};

struct element_type phosphorus = {
    "P",
    "Phosphorus",
    "15",
    "Nonmetal",
    "30.97376200 u",
    "Solid",
    "[Ne] 3s2 3p3",
    "+5, +3, -3",
    "2.19",
    "180 pm",
    "10.487 eV",
    "0.746 eV",
    "317.3 K",
    "553.65 K",
    "1.82 g/cm³",
    "1669",
    "https://pubchem.ncbi.nlm.nih.gov/element/15",
};

struct element_type sulfur = {
    "S",
    "Sulfur",
    "16",
    "Nonmetal",
    "32.07 u",
    "Solid",
    "[Ne] 3s2 3p4",
    "+6, +4, -2",
    "2.58",
    "180 pm",
    "10.360 eV",
    "2.077 eV",
    "388.36 K",
    "717.75 K",
    "2.067 g/cm³",
    "Ancient",
    "https://pubchem.ncbi.nlm.nih.gov/element/16",
};

struct element_type chlorine = {
    "Cl",
    "Chlorine",
    "17",
    "Halogen",
    "35.45 u",
    "Gas",
    "[Ne] 3s2 3p5",
    "+7, +5, +1, -1",
    "3.16",
    "175 pm",
    "12.968 eV",
    "3.617 eV",
    "171.65 K",
    "239.11 K",
    "0.003214 g/cm³",
    "1774",
    "https://pubchem.ncbi.nlm.nih.gov/element/17",
};

struct element_type argon = {
    "Ar",
    "Argon",
    "18",
    "Noble Gas",
    "39.9 u",
    "Gas",
    "[Ne] 3s2 3p6",
    "0",
    "N/A",
    "188 pm",
    "15.760 eV",
    "N/A",
    "83.8 K",
    "87.3 K",
    "0.0017837 g/cm³",
    "1894",
    "https://pubchem.ncbi.nlm.nih.gov/element/18",
};
