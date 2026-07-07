#include <stdio.h>

typedef struct{
	char a;
	unsigned char b;
	short int c;
	unsigned short int d;
	int e;
	unsigned int f;
	long long int g;
	unsigned long long int h;
	float i;
	double j;
	long double k;
}TStructure;

void main(){
	TStructure Str1;
	Str1.a = -12;
	Str1.b = 12;
	Str1.c = -23454;
	Str1.d = 62473;
	Str1.e = -23454324;
	Str1.f = 2574838479;
	Str1.g = -5674839847567483;
	Str1.h = 6574838475674834756;
	Str1.i = 234.65f;
	Str1.j = -5463.5746;
	Str1.k = 56.657e2;
	
	printf("Size structure: %ld; Size peremennoi: %ld; Adress peremennoi: %p\n", 
				sizeof(TStructure), sizeof(Str1), &Str1);
	printf("Pole 1: adress %p, znachenie %c\n", &Str1.a, Str1.a);
        printf("Pole 2: adress %p, znachenie %c\n", &Str1.b, Str1.b);
        printf("Pole 3: adress %p, znachenie %d\n", &Str1.c, Str1.c);
        printf("Pole 4: adress %p, znachenie %d\n", &Str1.d, Str1.d);
        printf("Pole 5: adress %p, znachenie %d\n", &Str1.e, Str1.e);
        printf("Pole 6: adress %p, znachenie %d\n", &Str1.f, Str1.f);
        printf("Pole 7: adress %p, znachenie %lld\n", &Str1.g, Str1.g);
        printf("Pole 8: adress %p, znachenie %lld\n", &Str1.h, Str1.h);
        printf("Pole 9: adress %p, znachenie %f\n", &Str1.i, Str1.i);
        printf("Pole 10: adress %p, znachenie %f\n", &Str1.j, Str1.j);
        printf("Pole 11: adress %p, znachenie %Lf\n", &Str1.k, Str1.k);
}
