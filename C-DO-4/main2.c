#include <stdio.h>

typedef union{
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
}TUnion;

void main(){
	TUnion Uni1;
	Uni1.a = -12;
	Uni1.b = 12;
	Uni1.c = -23454;
	Uni1.d = 62473;
	Uni1.e = -23454324;
	Uni1.f = 2574838479;
	Uni1.g = -5674839847567483;
	Uni1.h = 6574838475674834756;
	Uni1.i = 234.65f;
	Uni1.j = -5463.5746;
	Uni1.k = 56.657e2;
	
	printf("Size union: %ld; Size peremennoi: %ld; Adress peremennoi: %p\n", 
				sizeof(TUnion), sizeof(Uni1), &Uni1);
	printf("Pole 1: adress %p, znachenie %c\n", &Uni1.a, Uni1.a);
        printf("Pole 2: adress %p, znachenie %c\n", &Uni1.b, Uni1.b);
        printf("Pole 3: adress %p, znachenie %d\n", &Uni1.c, Uni1.c);
        printf("Pole 4: adress %p, znachenie %d\n", &Uni1.d, Uni1.d);
        printf("Pole 5: adress %p, znachenie %d\n", &Uni1.e, Uni1.e);
        printf("Pole 6: adress %p, znachenie %d\n", &Uni1.f, Uni1.f);
        printf("Pole 7: adress %p, znachenie %lld\n", &Uni1.g, Uni1.g);
        printf("Pole 8: adress %p, znachenie %lld\n", &Uni1.h, Uni1.h);
        printf("Pole 9: adress %p, znachenie %f\n", &Uni1.i, Uni1.i);
        printf("Pole 10: adress %p, znachenie %f\n", &Uni1.j, Uni1.j);
        printf("Pole 11: adress %p, znachenie %Lf\n", &Uni1.k, Uni1.k);
}
