#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <new>
#include <math.h>
using namespace std;

class blocks {
public:
	bool valid = false;  // false = No
	int tag = 0;
	int count = 0;
};

int main() {
	int memory_address[5004];
	int block_size;
	int location[5004];
	int cache_size_kilobyte;
	int cache_size_byte;
	int num_of_cache_block;
	int set;
	int num_of_set;
	int corresponding_set[5004];
	int num_of_cache_block_in_a_set;
	int miss_count = 0;
	int hit_count = 0;

	ofstream out;

	// Verifying the program using test cases from the problem statement. (0x0A985540)
	ifstream in("augmented_trace.txt");  // Open a file for text input.

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	// Read trace.txt (Hint 1)
	for (int i = 0; i < 5004; i++)
	{
		in >> hex >> memory_address[i];
	}

	in.close();

	// Show what the program read. (Hint 1)
	for (int i = 0; i < 5004; i++)
	{
		cout << memory_address[i] << "\n";
	}

	// Save what the program read.
	out.open("Hex_to_dec.txt");

	if (!out)
	{
		cout << "Cannot create or open file.";

		return 1;
	}

	// Output to the file.
	for (int i = 0; i < 5004; i++)
	{
		out << memory_address[i] << "\n";
	}

	// Close Hex_to_dec.txt
	out.close();

	// Hint 2
	cout << "What is each block's size in the cache? (Byte)" << "\n";

	cin >> block_size;

	switch (block_size)
	{
	case 8:
		for (int i = 0; i < 5004; i++)
		{
			location[i] = memory_address[i] / 8;
		}

		break;

	case 16:

		for (int i = 0; i < 5004; i++)
		{
			location[i] = memory_address[i] / 16;
		}

		break;

	case 32:

		for (int i = 0; i < 5004; i++)
		{
			location[i] = memory_address[i] / 32;

		}

		break;

	case 64:

		for (int i = 0; i < 5004; i++)
		{
			location[i] = memory_address[i] / 64;
		}

		break;

	default:
		break;
	}

	// Show the memory address' position in memory blocks. (Hint 2)
	for (int i = 0; i < 5004; i++)
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
	for (int i = 0; i < 5004; i++)
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
	cout << "Specify the n of n-way set-associative cache:" << "\n";
	cin >> set;

	num_of_set = num_of_cache_block / set;

	// Calculate which set does the memory block of interest correspond to? (Hint 3)

	for (int i = 0; i < 5004; i++)
	{
		corresponding_set[i] = location[i] % num_of_set;
	}

	// Show the set to which the memory block of interest correspond. (Hint 3)
	for (int i = 0; i < 5004; i++)
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
	for (int i = 0; i < 5004; i++)
	{
		out << corresponding_set[i] << "\n";
	}

	// Close Which_set_does_memory_block_belong_to.txt
	out.close();

	// Hint 4
	blocks block_1 = blocks();
	blocks block_2 = blocks();

	blocks set_of_interest[] = { block_1, block_2};

	cout << "Hint 5: \n" << "set[20] = {block_1, block_2};\n";
	cout << "block_#:   valid  |  Tag \n";
	cout << "block_1:   " << block_1.valid << "  |  " << block_1.tag << "\n";
	cout << "block_2:   " << block_2.valid << "  |  " << block_2.tag << "\n";


	if (block_1.valid == false) {
		block_1.valid = true;
		block_1.count++;
		miss_count++;
		block_1.tag = floor( location[0] / num_of_set);
	}

	// Hint 5
	if (location[0] / num_of_set == location[1] / num_of_set)
		hit_count++;



	return 0;
}