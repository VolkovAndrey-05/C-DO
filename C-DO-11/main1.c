#include <stdio.h>
#include <stdlib.h>
struct Zveno{
	int value;
	struct Zveno *nextZveno;
};

struct Zveno *add(struct Zveno *a, int value){
	struct Zveno *res = (struct Zveno*)malloc(sizeof(struct Zveno));
	res->value = value;
	res->nextZveno = a;
	return res;
}

struct Zveno *pop(struct Zveno *a, int value){
	if (a==NULL){
		return NULL;
}
	if (a->value == value){
		a = a->nextZveno;
		return a;
}
	struct Zveno *res = a;
	while(res->nextZveno!=NULL && res->nextZveno->value!=value){
		res=res->nextZveno;
}
	if(res->nextZveno==NULL){
		printf("Don`t value");
		return a;
}
	res->nextZveno = res->nextZveno->nextZveno;
	return a;
}

void output(struct Zveno *a){
	struct Zveno *cur = a;
	while(cur!=NULL){
		printf("Data %d, next %p\n", cur->value, cur->nextZveno);
		cur = cur->nextZveno;
}
}
int main(){
	int len = 8;
	struct Zveno arr[len]; 
	for(int i = 0; i<len; i++){
		arr[i].value = i;
		if (i == len-1){
			arr[i].nextZveno = NULL;
}
		else{
			arr[i].nextZveno = &arr[i+1];
}
}
	struct Zveno *cur = &arr[0];
	while(cur!=NULL){
		printf("Data: %d, next: %p\n", cur->value, cur->nextZveno);
		cur = cur->nextZveno;
}
	struct Zveno *res = add(arr, 9);
	res = pop(res, 1);
	output(res);
	return 0;
}
