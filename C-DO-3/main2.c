#include <stdio.h>

#define SIZEARR(arr) (sizeof(arr)/sizeof(arr[0]))

void main(){
	char arr_c[8] = {1, 01, 0x1, 2,02,0x2,-124,-07};
	printf("Char start adress: %p\n", arr_c);
	printf("Char size: %ld\n", SIZEARR(arr_c));
	printf("Char delta: %ld\n", &arr_c[SIZEARR(arr_c)]-&arr_c[0]);
	unsigned char un_arr_c[8] = {3, 03, 0x3, 0377, 0xFF, 255, 0};
        printf("UChar start adress: %p\n", un_arr_c);
        printf("UChar size: %ld\n", SIZEARR(un_arr_c));
        printf("UChar delta: %ld\n", &un_arr_c[SIZEARR(un_arr_c)]-&un_arr_c[0]);
	
	short int arr_sh[8] = {5, 07777, 0xFFF, 0, -0457, -0xAFE, 45, 32767};
        printf("Short start adress: %p\n", arr_sh);
        printf("Short size: %ld\n", SIZEARR(arr_sh));
        printf("Short delta: %ld\n", &arr_sh[SIZEARR(arr_sh)]-&arr_sh[0]);
	unsigned short int un_arr_sh[8] = {6, 06656, 0xFFFF, 0, 067, 0x6A5, 75, 64535};
        printf("UShort start adress: %p\n", un_arr_sh);
        printf("UShort size: %ld\n", SIZEARR(un_arr_sh));
        printf("UShort delta: %ld\n", &un_arr_sh[SIZEARR(un_arr_sh)]-&un_arr_sh[0]);

	int arr_i[8] = {17, 054321, 0xFA67E, -3, -0723, -0x6543C, 214767890, -987};
        printf("Int start adress: %p\n", arr_i);
        printf("Int size: %ld\n", SIZEARR(arr_i));
        printf("Int delta: %ld\n", &arr_i[SIZEARR(arr_i)]-&arr_i[0]);
	unsigned int un_arr_i[8] = {54, 0666523, 0xFFFFFFFF, 0, 05, 0x1, 412345, 03};
        printf("UInt start adress: %p\n", un_arr_i);
        printf("UInt size: %ld\n", SIZEARR(un_arr_i));
        printf("UInt delta: %ld\n", &un_arr_i[SIZEARR(un_arr_i)]-&un_arr_i[0]);

	long long int arr_l[8] = {234521231432,056435345625534,0x6AACBEFE, -12345678789, -0654327, -0xA2B5D6, 0, 0x12};
        printf("Long long start adress: %p\n", arr_l);
        printf("Long long size: %ld\n", SIZEARR(arr_l));
        printf("Long long delta: %ld\n", &arr_l[SIZEARR(arr_l)]-&arr_l[0]);
	unsigned long long int un_arr_l[8] = {5432567654, 04322563422534, 0xFFFFFFFFFFFFFFFF, 0, 05, 0x23, 075, 0x53A};
        printf("ULong long start adress: %p\n", un_arr_l);
        printf("ULong long size: %ld\n", SIZEARR(un_arr_l));
        printf("ULong long delta: %ld\n", &un_arr_l[SIZEARR(un_arr_l)]-&un_arr_l[0]);

	float arr_f[8] = {3.02, 1.0678e3, 0x1.6p1, -54.76, -1.5467e4, -0x3p1, 0, 87.95};
        printf("Float start adress: %p\n", arr_f);
        printf("Float size: %ld\n", SIZEARR(arr_f));
        printf("Float delta: %ld\n", &arr_f[SIZEARR(arr_f)]-&arr_f[0]);

	double arr_d[8] = {4.654323456, -76543.765432,32.6543234e54, 0x54321p-543, -6547.7654e234, -0x6543.655p265,
				 0, 8.0};
        printf("Double start adress: %p\n", arr_d);
        printf("Double size: %ld\n", SIZEARR(arr_d));
        printf("Double delta: %ld\n", &arr_d[SIZEARR(arr_d)]-&arr_d[0]);

	long double l_arr_d[8] = {654335.535254532325L, -76543456.9876543L, 56763.768675654345e456L, -65357753.876453e4L, 
				0x4546.552p5L, -0x454653.634p65L, 9.09L, 463.56e0L};
        printf("Long double start adress: %p\n", l_arr_d);
        printf("Long double size: %ld\n", SIZEARR(l_arr_d));
        printf("Long double delta: %ld\n", &l_arr_d[SIZEARR(l_arr_d)]-&l_arr_d[0]);

	printf("\n3 punkt\n");
	// 3 punkt
	for(int i = 0; i<SIZEARR(arr_c); i++){
	printf("char (%d) size: %ld\n",i, sizeof(arr_c[i]));
        printf("uchar (%d) size: %ld\n",i, sizeof(un_arr_c[i]));
        printf("short (%d) size: %ld\n",i, sizeof(arr_sh[i]));
        printf("unshort (%d) size: %ld\n",i, sizeof(un_arr_sh[i]));
        printf("int (%d) size: %ld\n",i, sizeof(arr_i[i]));
        printf("uint (%d) size: %ld\n",i, sizeof(un_arr_i[i]));
        printf("long long (%d) size: %ld\n",i, sizeof(arr_l[i]));
        printf("unlong long (%d) size: %ld\n",i, sizeof(un_arr_l[i]));
	printf("float (%d) size: %ld\n",i, sizeof(arr_f[i]));
        printf("double (%d) size: %ld\n",i, sizeof(arr_d[i]));
        printf("long double (%d) size: %ld\n",i, sizeof(l_arr_d[i]));
	}
}
