#include <stdio.h>

void show_binary(int number);
void show_binary2(long long number);

int main() {

	long long PCI_configuration_address = 0x8002080c;

	long long PCI_configuration_address_right_shifted = PCI_configuration_address >> 8;

}

void show_binary(long long number) {

	for (long long t = 2417483648; t > 0; t /= 2) {

		if (t & number) {



		}

	}


}

void show_binary2(long long number) {



}