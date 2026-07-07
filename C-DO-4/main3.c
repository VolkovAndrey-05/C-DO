#include <stdio.h>

typedef union{
	char a[sizeof(long double)];
	unsigned char b[sizeof(long double)];
	short int c[sizeof(long double)/sizeof(short int)];
	unsigned short int d[sizeof(long double)/sizeof(short int)];
	int e[sizeof(long double)/sizeof(int)];
	unsigned int f[sizeof(long double)/sizeof(int)];
	long long int g[sizeof(long double)/sizeof(long long int)];
	unsigned long long int h[sizeof(long double)/sizeof(long long int)];
	float i[sizeof(long double)/sizeof(float)];
	double j[sizeof(long double)/sizeof(double)];
	long double k;
}TUnion;

void main(){
	TUnion Uni1;
	//ne stal inicializirovat massivs celicom tolko 1 elements vezde
	Uni1.a[0] = -12;
	Uni1.b[0] = 12;
	Uni1.c[0] = -23454;
	Uni1.d[0] = 62473;
	Uni1.e[0] = -23454324;
	Uni1.f[0] = 2574838479;
	Uni1.g[0] = -5674839847567483;
	Uni1.h[0] = 6574838475674834756;
	Uni1.i[0] = 234.65f;
	Uni1.j[0] = -5463.5746;
	Uni1.k = 56.657e2;
	
	printf("Size union: %ld; Size peremennoi: %ld; Adress peremennoi: %p\n", 
				sizeof(TUnion), sizeof(Uni1), &Uni1);
	printf("Pole 1: adress %p, znachenie %c\n", Uni1.a, Uni1.a[0]);
        printf("Pole 2: adress %p, znachenie %c\n", Uni1.b, Uni1.b[0]);
        printf("Pole 3: adress %p, znachenie %d\n", Uni1.c, Uni1.c[0]);
        printf("Pole 4: adress %p, znachenie %d\n", Uni1.d, Uni1.d[0]);
        printf("Pole 5: adress %p, znachenie %d\n", Uni1.e, Uni1.e[0]);
        printf("Pole 6: adress %p, znachenie %d\n", Uni1.f, Uni1.f[0]);
        printf("Pole 7: adress %p, znachenie %lld\n", Uni1.g, Uni1.g[0]);
        printf("Pole 8: adress %p, znachenie %lld\n", Uni1.h, Uni1.h[0]);
        printf("Pole 9: adress %p, znachenie %f\n", Uni1.i, Uni1.i[0]);
        printf("Pole 10: adress %p, znachenie %f\n", Uni1.j, Uni1.j[0]);
        printf("Pole 11: adress %p, znachenie %Lf\n", &Uni1.k, Uni1.k);
}
