#include <iostream>
using namespace std;

struct node {

	int sequence_number;
	node* next_node_position;

};


int main() {

	node items[10];

	for (int i = 0; i < 10; i++)
		items[i].sequence_number = i + 1;

	for (int i = 0; i < 9; i++)
		items[i].next_node_position = &items[i + 1];

	items[9].next_node_position = NULL;

	for (int i = 9; i >= 0; i--)
		printf("%d ", items[i].sequence_number);

}