#include <stdio.h>

int main(){
	char a1;
	unsigned char a2;
	
	short int b1;
	unsigned short int b2;
	int b3;
	unsigned int b4;
	long long int b5;
	unsigned long long int b6;

	float c1;

	double d1;
	long double d2;

	printf("size char: %zu\n", sizeof(char));
	printf("size unsigned char: %zu\n", sizeof(unsigned char));
	printf("otnoshenie razmerov char: %ld\n", sizeof(char)/sizeof(unsigned char));
	printf("size short int: %zu\n", sizeof(short int));
	printf("size unsigned short int: %zu\n", sizeof(unsigned short int));
	printf("size int: %zu\n", sizeof(int));
	printf("size unsigned int: %zu\n", sizeof(unsigned int));
	printf("size long long int: %zu\n", sizeof(long long int));
	printf("size unsigned long long int: %zu\n", sizeof(unsigned long long int));
	printf("otnoshenie razmerov int: int/short %ld, long long/int %ld\n", sizeof(int)/sizeof(short int), sizeof(long long int)/sizeof(int));
	printf("size float: %zu\n", sizeof(float));
	printf("size double: %zu\n", sizeof(double));
	printf("size long double: %zu\n", sizeof(long double));
	printf("otnoshenie razmerov double: long double/double %ld\n", sizeof(long double)/sizeof(double));
	return 0;
}
