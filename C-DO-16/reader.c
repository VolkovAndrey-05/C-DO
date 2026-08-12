#include <stdio.h>

int main(){
	char buf[20];
	while(fgets(buf, sizeof(buf), stdin)!=0){
		printf("%s", buf);
}
	return 0;
}
