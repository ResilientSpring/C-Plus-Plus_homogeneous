#include <iostream>
using namespace std;

int main() {

	char command[] = "cancel";

	switch (command)
	{
	case "connect":
		printf("Connecting");
		break;
	case "cancel":
		printf("canceling");
		break;

	default:
		printf("Command Error!");
		break;
	}

}