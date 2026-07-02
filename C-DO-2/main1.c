#include <stdio.h>

int main(){
	int a;
	float b;
	double c;
	char d;

	void *x; // kak pustoi type, hranit ykazatel

	printf("size int: %zu\n", sizeof(int));
	printf("size float: %zu\n", sizeof(float));
	printf("size double: %zu\n", sizeof(double));
	printf("size char: %zu\n", sizeof(char));
	printf("size void: %zu\n", sizeof(void*));
	return 0;
}
