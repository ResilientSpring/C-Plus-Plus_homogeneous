#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main() {
	int a, b, c, d[5002];
	int block_size;
	int location[5002];
	int cache_size_kilobyte;
	int cache_size_byte;
	int num_of_cache_block;
	int set;
	int num_of_set;
	int corresponding_set[5002];
	int num_of_cache_block_in_a_set;

	ofstream out;

	ifstream in("trace.txt");  // Open a file for text input.

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	in >> hex >> a;
	in >> hex >> b;
	in >> hex >> c;

	// Read trace.txt (Hint 1)
	for (int i = 0; i < 5002; i++)
	{
		in >> hex >> d[i];
	}

	in.close();

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";

	// Show what the program read. (Hint 1)
	for (int i = 0; i < 5002; i++)
	{
		cout << d[i] << "\n";
	}

	// Save what the program read.
	out.open("Hex_to_dec.txt");

	if (!out)
	{
		cout << "Cannot create or open file.";

		return 1;
	}

	// Output to the file.
	for (int i = 0; i < 5002; i++)
	{
		out << d[i] << "\n";
	}

	// Close Hex_to_dec.txt
	out.close();

	// Hint 2
	cout << "What is the block size of cache? (Byte)" << "\n";

	cin >> block_size;

	switch (block_size)
	{
	case 8:
		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 8;
		}

		break;

	case 16:

		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 16;
		}

		break;

	case 32:

		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 32;

		}

		break;

	case 64:

		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 64;
		}

		break;

	default:
		break;
	}

	// Show the memory address' position in memory blocks. (Hint 2)
	for (int i = 0; i < 5002; i++)
	{
		cout << location[i] << "\n";
	}

	// Write down memory address' position in memory blocks.
	out.open("Which_block_is_the_memory_address_in.txt");

	if (!out)
	{
		cout << "Cannot create or open file.";

		return 1;
	}

	// Output to the file.
	for (int i = 0; i < 5002; i++)
	{
		out << location[i] << "\n";
	}

	// Close Which_block_is_the_memory_address_in.txt
	out.close();

	// Hint 3
	cout << "What is the size of cache? (kilo-byte)" << "\n";
	cin >> cache_size_kilobyte;

	cache_size_byte = cache_size_kilobyte * 1024;
	num_of_cache_block = cache_size_byte / block_size;

	// Hint 3
	cout << "Specify the n of n-set associative:" << "\n";
	cin >> set;

	num_of_set = num_of_cache_block / set;

	// Calculate which set does the memory block of interest correspond to? (Hint 3)

	for (int i = 0; i < 5002; i++)
	{
		corresponding_set[i] = location[i] % num_of_set;
	}

	// Show the set to which the memory block of interest correspond. (Hint 3)
	for (int i = 0; i < 5002; i++)
	{
		cout << corresponding_set[i] << "\n";
	}

	// Save each memory block's corresponding set.
	out.open("Which_set_does_memory_block_belong_to.txt");

	if (!out)
	{
		cout << "Cannot create or open file.";

		return 1;
	}

	// Output to the file.
	for (int i = 0; i < 5002; i++)
	{
		out << corresponding_set[i] << "\n";
	}

	// Close Which_set_does_memory_block_belong_to.txt
	out.close();

	num_of_cache_block_in_a_set = num_of_cache_block / num_of_set;

	//	int inside_cache[num_of_cache_block_in_a_set][4];

	return 0;
}