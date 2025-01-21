#include <stdio.h>

void show_binary(long long number);
void show_binary2(long long number);

int main() {

	long long PCI_configuration_address = 0x8002080c;

	long long PCI_config_addr_right_shifted = PCI_configuration_address >> 8;

	show_binary2(PCI_configuration_address);

	show_binary(PCI_configuration_address);
}

void show_binary(long long number) {

	for (long long t = 2417483648; t > 0; t /= 2) {

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