#include <stdio.h>
#include "string.h"
void charInput(char *a){
	for (int i = 0; i<64; i++){
		char in;
		scanf("%hhd", &in);
		a[i] = in;
}
}
void charUnInput(char *a){
        for (int i = 0; i<64; i++){
                unsigned char in;
                scanf("%hhd", &in);
                a[i] = in;
}
}
void shortInput(char *a){
        for (int i = 0; i<64/sizeof(short); i++){
                short in;
                scanf("%hd", &in);
                memcpy(a+i*sizeof(short), &in, sizeof(short));
}
}
void shortUnInput(char *a){
        for (int i = 0; i<64/sizeof(short); i++){
                unsigned short in;
                scanf("%hd", &in);
                memcpy(a+i*sizeof(unsigned short), &in, sizeof(unsigned short));
}
}
void intInput(char *a){
        for (int i = 0; i<64/sizeof(int); i++){
                int in;
                scanf("%d", &in);
                memcpy(a+i*sizeof(int), &in, sizeof(int));
}
}
void intUnInput(char *a){
        for (int i = 0; i<64/sizeof(int); i++){
                unsigned int in;
                scanf("%d", &in);
                memcpy(a+i*sizeof(unsigned int), &in, sizeof(unsigned int));
}
}
void longInput(char *a){
        for (int i = 0; i<64/sizeof(long long int); i++){
                long long int in;
                scanf("%lld", &in);
                memcpy(a+i*sizeof(long long int), &in, sizeof(long long int));
}
}
void longUnInput(char *a){
        for (int i = 0; i<64/sizeof(long long int); i++){
                unsigned long long int in;
                scanf("%lld", &in);
                memcpy(a+i*sizeof(unsigned long long int), &in, sizeof(unsigned long long int));
}
}
void floatInput(char *a){
        for (int i = 0; i<64/sizeof(float); i++){
                float in;
                scanf("%f", &in);
                memcpy(a+i*sizeof(float), &in, sizeof(float));
}
}
void doubleInput(char *a){
        for (int i = 0; i<64/sizeof(double); i++){
                double in;
                scanf("%lf", &in);
                memcpy(a+i*sizeof(double), &in, sizeof(double));
}
}
void longDoubleInput(char *a){
        for (int i = 0; i<64/sizeof(long double); i++){
                long double in;
                scanf("%Lf", &in);
                memcpy(a+i*sizeof(long double), &in, sizeof(long double));
}
}
void main(){
		char arr_c[64] = {1,2,3,4,5,6,7,8,9,10,
		11,12,13,14,15,16,17,18,19,20,
		21,22,23,24,25,26,27,28,29,30,
		31,32,33,34,35,36,37,38,39,40,
		41,42,43,44,45,46,47,48,49,50,
		52,52,53,54,55,56,57,58,59,60,
		61,62,63,64};
	charInput(arr_c);
	charUnInput(arr_c);
	shortInput(arr_c);
	shortUnInput(arr_c);
	intInput(arr_c);
	intUnInput(arr_c);
	longInput(arr_c);
	longUnInput(arr_c);
	floatInput(arr_c);
	doubleInput(arr_c);
	longDoubleInput(arr_c);
}
