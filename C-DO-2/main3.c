#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
	char max_c = 0x7F;
	char min_c = 0x80;
	unsigned char un_max_c = 0xFF;
	unsigned char un_min_c = 0x00;

	short int max_sh = 0x7FFF;
	short int min_sh = 0x8000;
	unsigned short int un_min_sh = 0x0000;
	unsigned short int un_max_sh = 0xFFFF;
	int max_i = 0x7FFFFFFF;
	int min_i = 0x80000000;
	unsigned un_max_i = 0xFFFFFFFF;
	unsigned un_min_i = 0x00000000;
	long long int max_l = 0x7FFFFFFFFFFFFFFF;
	long long int min_l = 0x8000000000000000;
	unsigned long long int un_max_l = 0xFFFFFFFFFFFFFFFF;
	unsigned long long int un_min_l = 0x0000000000000000;

	float max_f = 0x1.fffffep+127f;
	float min_f = 0x1.0p-126f;
	double max_d = 0x1.ffffffffffffp+1023;
	double min_d = 0x1.0p-1022;
	long double max_ld = 0x1.fffffffffffffffep+16383L;
	long double min_ld = 0x1.0p-16382L;

	printf("short hex: min %x, max %x\n", min_sh, max_sh);
	printf("short dec: min %d, max %d\n", min_sh, max_sh);
	printf("unshort hex: min %x, max %x\n", un_min_sh, un_max_sh);
	printf("unshort dec: min %d, max %d\n", un_min_sh, un_max_sh);
	printf("int hex: min %x, max %x\n", min_i, max_i);
	printf("int dec: min %d, max %d\n", min_i, max_i);
	printf("unint hex: min %x, max %x\n", un_min_i, un_max_i);
        printf("unint dec: min %d, max %d\n", un_min_i, un_max_i);
	printf("long long hex: min %llx, max %llx\n", min_l, max_l);
        printf("long long dec: min %lld, max %lld\n", min_l, max_l);
	printf("unlong long hex: min %llx, max %llx\n", un_min_l, un_max_l);
        printf("unlong long dec: min %lld, max %lld\n", un_min_l, un_max_l);

        printf("float hex: min %a, max %a\n", min_f, max_f);
        printf("float exp: min %e, max %e\n", min_f, max_f);
	printf("float item: min %f, max %f\n", min_f, max_f);
        printf("double hex: min %a, max %a\n", min_d, max_d);
        printf("double exp: min %e, max %e\n", min_d, max_d);
        printf("double item: min %f, max %f\n", min_d, max_d);
        printf("long double hex: min %La, max %La\n", min_ld, max_ld);
        printf("long double exp: min %Le, max %Le\n", min_ld, max_ld);
        printf("long double item: min %Lf, max %Lf\n", min_ld, max_ld);
	return 0;
}
