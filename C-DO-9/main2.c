#include <stdio.h>

void set_null(short a){
	printf("Set 0\n");
	for(int i = 15; i>=0; i--){
		printf("%d ", 0&(a>>i));
}
}

void set_one(short a){
        printf("\nSet 1\n");
        for(int i = 15; i>=0; i--){
	        printf("%d ", 1||(a>>i));
}}

void set_cycle(short a){
        printf("\nSet cycle\n");
	//a = ~a;
        for(int i = 15; i>=0; i--){
        	printf("%d ", ((a^(1<<i))>>i)&1);
}}

int main(){
	short a;
	scanf("%hd", &a);
	set_null(a);
	set_one(a);
	set_cycle(a);
	return 0;
}
