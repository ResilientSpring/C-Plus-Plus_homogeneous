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

}