// Use a 2-D array of pointers to create a dictionary.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char dictionary[][2] = { {"Pencil", "A writing instrument"} };
	char dictionary2[] = { "Pencil is a writing instrument." };
	char dictionary3[][] = { "Pencil is a writing instrument." };
	char dictionary4[][3] = { {"Pencil", "A writing instrument."} };
	char dictionary5[][3] = { "Pencil", "A writing instrument." };
	char dictionary6[10][100] = { {"Pencil", "A writing instrument"}, {"What", "is"} };

    char DirectionPosition[][5][3] = { {"00", "10", "", "01", ""},
                                    {"01", "11", "", "02", "00"},
                                    {"02", "12", "", "03", "01"},
                                    {"03", "13", "", "04", "02"},
                                    {"04", "14", "", "", "03"},
                                    {"10", "20", "00", "11", ""},
                                    {"11", "21", "01", "12", "10"},
                                    {"12", "22", "02", "13", "11"},
                                      {"44", "", "34", "", "43"}, };

}