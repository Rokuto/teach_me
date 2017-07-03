#include <stdio.h>

int main(int argc, char const *argv[]) {
	char name[256];

	printf("Enter Name: ");
	scanf("%s", name);
	printf("Welcome %s\n", name);
	return 0;
}
