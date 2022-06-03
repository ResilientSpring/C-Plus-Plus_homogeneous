/*

This program displays all printable characters, including the extended character set, if one exists.

*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
	unsigned char ch;

	ch = 32;

	while (ch)
	{
		printf("%c", ch);

		ch++;
	}
}