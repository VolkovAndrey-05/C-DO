#include <stdio.h>
#include <string.h>

struct DoubleBit{
	unsigned long long int mantissa:52;
	unsigned int poradok:11;
	unsigned int sign:1;
};

double pereschet(struct DoubleBit s){
        double rez;
        memcpy(&rez, &s, sizeof(double));
        return rez;
}

int main(){
	struct DoubleBit sym;
	// 4.0
	sym.sign=0;
	sym.poradok=1025;
	sym.mantissa=0;
	double rez;
	memcpy(&rez, &sym, sizeof(double));
	printf("Result 4: %llx\n", (long long int)rez);
	//1.0
	sym = (struct DoubleBit){0, 1023, 0};
	memcpy(&rez, &sym, sizeof(double));
	printf("Result 1: %llx\n", (long long int)rez);

	printf("Function result: %f\n", pereschet(sym));
	return 0;
}
