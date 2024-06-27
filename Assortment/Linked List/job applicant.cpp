#include <iostream>
using namespace std;

struct node {

	int sequence_number;
	node* next_node_position;

};


int main() {

	node list_item1, list_item2, list_item3, list_item4, list_item5, list_item6, list_item7, list_item8, list_item9, list_item10;

	list_item1.sequence_number = 1;
	list_item1.next_node_position = &list_item2;

	list_item2.sequence_number = 2;
	list_item2.next_node_position = &list_item3;

	node items[10];

	for (int i = 0; i < 10; i++)
		items[i].sequence_number = i + 1;

	for (int i = 0; i < 9; i++)
		items[i].next_node_position = &items[i + 1];

	items[9].next_node_position = nullptr;

	for (int i = 9; i >= 0; i--)
		printf("%d ", items[i].sequence_number);

}