#include <stdio.h>
#include <string.h>

struct FloatBit{
	unsigned int mantissa:23;
	unsigned int poradok:8;
	unsigned int sign:1;
};

float pereschet(struct FloatBit s){
        float rez;
        memcpy(&rez, &s, sizeof(float));
        return rez;
}

int main(){
	struct FloatBit sym;
	// 4.0
	sym.sign=0;
	sym.poradok=129;
	sym.mantissa=0;
	float rez;
	memcpy(&rez, &sym, sizeof(float));
	printf("Result 4: %x\n", (int)rez);
	//1.0
	sym = (struct FloatBit){0, 132, 0};
	memcpy(&rez, &sym, sizeof(float));
	printf("Result 1: %x\n", (int)rez);

	printf("Function result: %f\n", pereschet(sym));
	return 0;
}
