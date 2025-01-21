#include <stdio.h>

void show_binary(long long number);
void show_binary2(long long number);
void show_binary3(long long number);

int main() {

	long long PCI_configuration_address = 0x8002080c;

	long long PCI_config_addr_right_shifted = PCI_configuration_address >> 8;

	show_binary2(PCI_configuration_address);

	printf("\n");

	show_binary(PCI_configuration_address);
}

void show_binary(long long number) {

	for (long long t = 2147483648; t > 0; t /= 2) {

		if (t & number) {

			printf("1 ");

		}
		else {

			printf("0 ");

		}

	}


}

void show_binary2(long long number) {

	for (int i = 1024; i >= 256; i = i / 2) {

		if (i & number) {

			printf("1 ");

		}
		else {

			printf("0 ");

		}

	}

}

int show_binary3(long long number) {
	
	int decimal;
	int ordinal = 0;
	int least_significant_bit = 0;
	int most_significant_bit = 0;

	for (int i = 1024; i >= 256; i = i / 2) {

		if (i & number) {

			printf("1 ");

			if (i == 1024) {

				most_significant_bit = 1;

			}
			else if (i == 512) {

				ordinal = 1;

			}
			else if (i == 256) {

				least_significant_bit = 1;

			}


		}
		else {

			printf("0 ");

		}

	}

	if (most_significant_bit && ordinal && least_significant_bit) {
		decimal = 7;
	}
	else if (most_significant_bit == 1 && ordinal == 1 && least_significant_bit == 0) {
		decimal = 6;
	}
	else if (most_significant_bit == 1 && ordinal == 0 && least_significant_bit == 1) {
		decimal = 5;
	}
	else if (most_significant_bit == 1 && ordinal == 0 && least_significant_bit == 0) {
		decimal = 4;
	}
	else if (most_significant_bit == 0 && ordinal == 1 && least_significant_bit == 1) {
		decimal = 3;
	}
	else if (most_significant_bit == 0 && ordinal == 1 && least_significant_bit == 0) {
		decimal = 2;
	}
	else if (most_significant_bit == 0 && ordinal == 0 && least_significant_bit == 1) {
		decimal = 1;
	}
	else {
		decimal = 0;
	}

	return decimal;

}