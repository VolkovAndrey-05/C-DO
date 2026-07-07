#include <stdio.h>
#include "main3.h"

int main(){
	char arr_c[8] = {1, 01, 0x1, 2,02,0x2,-124,-07};
	unsigned char un_arr_c[8] = {3, 03, 0x3, 0377, 0xFF, 255, 0};
	
	short int arr_sh[8] = {5, 07777, 0xFFF, 0, -0457, -0xAFE, 45, 32767};
	unsigned short int un_arr_sh[8] = {6, 06656, 0xFFFF, 0, 067, 0x6A5, 75, 64535};
	int arr_i[8] = {17, 054321, 0xFA67E, -3, -0723, -0x6543C, 214767890, -987};
	unsigned int un_arr_i[8] = {54, 0666523, 0xFFFFFFFF, 0, 05, 0x1, 412345, 03};
	long long int arr_l[8] = {234521231432, 056435345625534, 0x6AACBEFE, -12345678789, -0654327, -0xA2B5D6, 0, 0x12};
	unsigned long long int un_arr_l[8] = {5432567654, 04322563422534, 0xFFFFFFFFFFFFFFFF, 0, 05, 0x23, 075, 0x53A};

	float arr_f[8] = {3.02, 1.0678e3, 0x1.6p1, -54.76, -1.5467e4, -0x3p1, 0, 87.95};
	double arr_d[8] = {4.654323456, -76543.765432,32.6543234e54, 0x54321p-543, -6547.7654e234, -0x6543.655p265, 0, 8.0};
	long double l_arr_d[8] = {654335.535254532325L, -76543456.9876543L, 56763.768675654345e456L, -65357753.876453e4L, 
				0x4546.552p5L, -0x454653.634p65L, 9.09L, 463.56e0L};

	print_char(arr_c, 8);
	print_uchar(un_arr_c, 8);
	print_short(arr_sh, 8);
	print_ushort(un_arr_sh, 8);
	print_int(arr_i, 8);
	print_uint(un_arr_i, 8);
	print_longint(arr_l, 8);
	print_ulongint(un_arr_l, 8);
	print_float(arr_f, 8);
	print_double(arr_d, 8);
	print_longdouble(l_arr_d, 8);
	return 0;
}

