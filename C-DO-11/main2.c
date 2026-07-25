#include <stdio.h>
#include <stdlib.h>

struct Zveno{
	int value;
	struct Zveno *nextZveno;
	struct Zveno *prevZveno;
};

struct Zveno *add(struct Zveno *a, int value){
	struct Zveno *res = (struct Zveno*)malloc(sizeof(struct Zveno));
	if(a!=NULL){
		a->prevZveno = res;
}
	res->value = value;
	res->nextZveno = a;
	res->prevZveno = NULL;
	return res;
}

struct Zveno *pop(struct Zveno *a, int value){
	if (a==NULL){
		return NULL;
}
	if (a->value == value){
		a = a->nextZveno;
		a->prevZveno = NULL;
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
	res->nextZveno->prevZveno = res;
	return a;
}

void outputSt(struct Zveno *a){
	struct Zveno *cur = a;
	while(cur!=NULL){
		printf("Data %d, next %p, prev %p\n", cur->value, cur->nextZveno, cur->prevZveno);
		cur = cur->nextZveno;
}
}
void outputEnd(struct Zveno *a, int len){
	printf("End\n");
	struct Zveno *curr = a;
	while(curr->nextZveno!=NULL){
		curr=curr->nextZveno;
}
	while(curr!=NULL){
		printf("Data %d, next %p, prev %p\n", curr->value, curr->nextZveno, curr->prevZveno);
		curr = curr->prevZveno;
}
}
int main(){
	int len = 8;
	struct Zveno arr[len]; 
	for(int i = 0; i<len; i++){
		arr[i].value = i;
		if (i == len-1){
			arr[i].nextZveno = NULL;
			arr[i].prevZveno = &arr[i-1];
}
		else if (i == 0){
			arr[i].nextZveno = &arr[i+1];
			arr[i].prevZveno = NULL;
}
		else{
			arr[i].nextZveno = &arr[i+1];
			arr[i].prevZveno = &arr[i-1];
}
}
	struct Zveno *cur = &arr[0];
	while(cur!=NULL){
		printf("Data: %d, next: %p, prev: %p\n", cur->value, cur->nextZveno, cur->prevZveno);
		cur = cur->nextZveno;
}
	struct Zveno *res = add(arr, 9);
	res = pop(res, 1);
	outputSt(res);
	outputEnd(res, len);
	return 0;
}
