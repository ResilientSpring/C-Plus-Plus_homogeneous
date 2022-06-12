#include <stdio.h>
#include <Windows.h>

int main() {
	SYSTEM_INFO system_info;
	GetSystemInfo(&system_info);

	printf("The page size for this system is %u bytes. \n", system_info.dwPageSize);
}

// Source:
// https://en.wikipedia.org/wiki/Page_(computer_memory)