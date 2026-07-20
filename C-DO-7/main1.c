#include <stdio.h>

void charOutput(char *a){
	for (int i = 0; i<64; i++){
		printf("Char elements %d: dec %d\n, hex %x", i,*(a+i), *(a+i));
}
	printf("\n");
}
void charUnOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Unsigned Char elements %d: dec %d, hex %x\n", i,(unsigned char)*(a+i), (unsigned char)*(a+i));
}
        printf("\n");
}
void shortOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Short elements %d: dec %d, hex %x\n", i,(short)*(a+i), (short)*(a+i));
}
        printf("\n");
}
void shortUnOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Unsigned Short elements %d: dec %d, hex %x\n", i,(unsigned short)*(a+i), (unsigned short)*(a+i));
}
        printf("\n");
}
void intOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Int elements %d: dec %d, hex %x\n", i,(int)*(a+i), (int)*(a+i));
}
        printf("\n");
}
void intUnOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Unsigned Int elements %d: dec %d, hex %x\n", i,(unsigned int)*(a+i), (unsigned int)*(a+i));
}
        printf("\n");
}
void longOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Long long elements %d: dec %lld, hex %llx\n", i,(long long int)*(a+i), (long long int)*(a+i));
}
        printf("\n");
}
void longUnOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Unsigned Long long int elements %d: dec %lld, hex %llx\n", i,(unsigned long long int)*(a+i), (unsigned long long int)*(a+i));
}
        printf("\n");
}
void floatOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Float elements %d: item %f, exp %e, hex %a\n", i,(float)*(a+i), (float)*(a+i), (float)*(a+i));
}
        printf("\n");
}
void doubleOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Double elements %d: item %lf, exp %e, hex %a\n", i,(double)*(a+i), (double)*(a+i), (double)*(a+i));
}
        printf("\n");
}
void longDoubleOutput(char *a){
        for (int i = 0; i<64; i++){
                printf("Long double elements %d: item %Lf, exp %Le, hex %La\n", i,(long double)*(a+i), (long double)*(a+i), (long double)*(a+i));
}
        printf("\n");
}

int main(){
	char arr_c[64] = {1,2,3,4,5,6,7,8,9,10,
		11,12,13,14,15,16,17,18,19,20,
		21,22,23,24,25,26,27,28,29,30,
		31,32,33,34,35,36,37,38,39,40,
		41,42,43,44,45,46,47,48,49,50,
		52,52,53,54,55,56,57,58,59,60,
		61,62,63,64};
	charOutput(arr_c);
	charUnOutput(arr_c);
	shortOutput(arr_c);
	shortUnOutput(arr_c);
	intOutput(arr_c);
	intUnOutput(arr_c);
	longOutput(arr_c);
	longUnOutput(arr_c);
	floatOutput(arr_c);
	doubleOutput(arr_c);
	longDoubleOutput(arr_c);
	return 0;
}

