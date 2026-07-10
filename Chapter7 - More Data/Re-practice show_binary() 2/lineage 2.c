#include <stdio.h>

int show_binary(unsigned int u) {

	for (int t = 65536; t > 0; t = t >> 1) {

		if (t & u)
			printf("1");
		else
			printf("0");

	}

}

int main() {

	show_binary(23456);


}