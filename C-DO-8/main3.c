#include <stdio.h>
#include <string.h>

struct FloatBit{
	unsigned int mantissa:23;
	unsigned int poradok:8;
	unsigned int sign:1;
};

void setter_sign(struct FloatBit *s, unsigned int sign_new){
	s->sign = sign_new;
}
void setter_mant(struct FloatBit *s, unsigned int mant){
        s->mantissa = mant;
}
void setter_exp(struct FloatBit *s, unsigned int exp){
        s->poradok = exp;
}
unsigned int getter_sign(struct FloatBit *s){
	return s->sign;
}
unsigned int getter_exp(struct FloatBit *s){
        return s->poradok;
}
unsigned int getter_mant(struct FloatBit *s){
        return s->mantissa;
}

int main(){
	struct FloatBit sym;
	setter_sign(&sym, 1);
	setter_mant(&sym, 2);
	setter_exp(&sym,132);
	printf("Output sign: %d, mant: %d, exp: %d", getter_sign(&sym), getter_mant(&sym), getter_exp(&sym));
	return 0;
}
