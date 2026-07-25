#include <stdio.h>

int main(){
	//OR
	printf("OR\n");
	for (int i = 0; i<2; i++){
		for (int j = 0; j<2; j++){
			printf("%d   %d   %d\n", i, j, i || j);
}
}
	//AND
        printf("AND\n");
        for (int i = 0; i<2; i++){
                for (int j = 0; j<2; j++){
                        printf("%d   %d   %d\n", i, j, i & j);
}
}
	//NOT
        printf("NOT\n");
        for (int i = 0; i<2; i++){
        	printf("%d   %d\n", i, !i);
}
	//XOR
        printf("XOR\n");
        for (int i = 0; i<2; i++){
                for (int j = 0; j<2; j++){
                        printf("%d   %d   %d\n", i, j, i ^ j);
}
}
	return 0;
}
