#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main() {
	char str[] = "This is a string";
	char str2[] = { "This is a string" };
	char str3[][100] = { {"This is a string."} };
	char str4[][100] = { {"This is a string"}, {"Nursing a grievance against sb"}, {"grudge"} };
    char str5[][10][15] = { {{"string"}, {"grief"}}, {{"out of blue"}, {"carcinoma"}}, {{"ovation"}, {"kk"}} };
	
    char DirectionPosition[][5][3] = {
    {"00", "10", "", "01", ""},
    {"01", "11", "", "02", "00"},
    {"02", "12", "", "03", "01"},
    {"03", "13", "", "04", "02"},
    {"04", "14", "", "", "03"},
    {"10", "20", "00", "11", ""},
    {"11", "21", "01", "12", "10"},
    {"12", "22", "02", "13", "11"},
    {"44", "", "34", "", "43"},
    }; // [1]
}

// Reference:
// 1. https://stackoverflow.com/a/845095/