#include "main3.h"
#include <stdio.h>
void print_char(char arr_c[], int size){
	for(int i = 0; i<size; i++){
        printf("char %d: dec %d, oct %o, hex %x\n", i, arr_c[i], arr_c[i], arr_c[i]);
	}
}
void print_uchar(unsigned char un_arr_c[], int size){
        for(int i = 0; i<size; i++){
        printf("uchar %d: dec %d, oct %o, hex %x\n", i, un_arr_c[i], un_arr_c[i], un_arr_c[i]);
        }
}
void print_short(short int arr_sh[], int size){
        for(int i = 0; i<size; i++){
        printf("short %d: dec %d, oct %o, hex %x\n", i, arr_sh[i], arr_sh[i], arr_sh[i]);
        }
}
void print_ushort(unsigned short un_arr_sh[], int size){
        for(int i = 0; i<size; i++){
        printf("unshort %d: dec %d, oct %o, hex %x\n", i, un_arr_sh[i], un_arr_sh[i], un_arr_sh[i]);
        }
}
void print_int(int arr_i[], int size){
        for(int i = 0; i<size; i++){
        printf("int %d: dec %d, oct %o, hex %x\n", i, arr_i[i], arr_i[i], arr_i[i]);
        }
}
void print_uint(unsigned int un_arr_i[], int size){
        for(int i = 0; i<size; i++){
        printf("unint %d: dec %d, oct %o, hex %x\n", i, un_arr_i[i], un_arr_i[i], un_arr_i[i]);
        }
}
void print_longint(long long int arr_l[], int size){
        for(int i = 0; i<size; i++){
        printf("long long %d: dec %lld, oct %llo, hex %llx\n", i, arr_l[i], arr_l[i], arr_l[i]);
        }
}
void print_ulongint(unsigned long long int un_arr_l[], int size){
        for(int i = 0; i<size; i++){
        printf("unlong long %d: dec %lld, oct %llo, hex %llx\n", i, un_arr_l[i], un_arr_l[i], un_arr_l[i]);
        }
}
void print_float(float arr_f[], int size){
        for(int i = 0; i<size; i++){
        printf("float %d: item %f, exp %e, hex %a\n", i, arr_f[i], arr_f[i], arr_f[i]);
        }
}
void print_double(double arr_d[], int size){
        for(int i = 0; i<size; i++){
        printf("double %d: item %f, exp %e, hex %a\n", i, arr_d[i], arr_d[i], arr_d[i]);
        }
}
void print_longdouble(long double l_arr_d[], int size){
        for(int i = 0; i<size; i++){
        printf("long double %d: item %Lf, exp %Le, hex %La\n", i, l_arr_d[i], l_arr_d[i], l_arr_d[i]);
        }
}

