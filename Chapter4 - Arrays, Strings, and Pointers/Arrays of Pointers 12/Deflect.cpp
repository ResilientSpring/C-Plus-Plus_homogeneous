// Use a 2-D array of pointers to create a dictionary.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char dictionary[][2][100] = {
		{"Pencil", "A writing instrument"},
		{"keyboard", "An input device"},
		{"rifle", "A shoulder-fired firearm."}, 
		{"airplane", "A fixed-wing aircraft."},
		{"network", "An interconnected group of computers"}
	};
}