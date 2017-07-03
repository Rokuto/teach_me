#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	char name[256];
	char rname[8] = "rokuto\0";

	printf("Enter Name: ");
	scanf("%s", name);

	if(strcmp(name, rname) == 0){
		printf("Welcome %s\n", name);
	}else{
		printf("Why\n");
	}

	return 0;
}
