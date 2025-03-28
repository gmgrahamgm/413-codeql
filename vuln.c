#include <stdio.h>
#include <string.h>

int copy_string(char* str) {
	char buf[128];
	strcpy(buf, str);
	return 1;
}

int main(int argc, char *argv[]) {
	copy_string(argv[1]);
	printf("Successfuly copied the string ");
	printf(argv[1]); // New line
	return 0;
}
