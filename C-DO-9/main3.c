#include <stdio.h>

void set_bit(int *m, short bit, short pos){
	*m |= (bit << pos);
	printf("%d\n", *m);
}

int main(){
	int m; 
	short poz, bit;
	printf("Input value number\n");
	scanf("%d", &m);
	printf("Input value bit\n");
        scanf("%hd", &bit);
	printf("Input value position\n");
        scanf("%hd", &poz);
	set_bit(&m, bit, poz);
	return 0;
}
