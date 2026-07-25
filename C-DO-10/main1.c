#include <stdio.h>
#include <stdlib.h>
int mstrlen(char *a){
	int len = 0;
	while(a[len] != '\0'){
		len++;
	}
	return len;
}

char *mstrcpy(char *buf, char *str){
	char *star = buf;
	while(*str!='\0'){
		*buf = *str;
		buf++;
		str++;
}
	*buf = '\0';
	return star;
}

char *mstrdup(char *str){
	char *des = (char*)malloc(mstrlen(str)+1);
	char *star = des;
	while(*str!='\0'){
		*des = *str;
		des++;
		str++;
}
	*des = '\0';
	return star;
}

char *mstrcat(char *str1, char *str2){
	char *str = str1;
	while(*str1!='\0'){
		str1++;
}
	while(*str2!='\0'){
		*str1 = *str2;
		str1++;
		str2++;
}
	*str1 = '\0';
	return str;
}

char *mstrpbrk(char *str, char* desk){
	while(*str!='\0'){
		char *d = desk;
		while(*d!='\0'){
			if(*str == *d){
				return str;
			}
			d++;
}
		str++;
}
	return NULL;
}

int mstrcmp(char *str1, char *str2){
	while(*str1 != '\0' && *str2 != '\0'){
		if(*str1 != *str2){
			return *str1-*str2;
		}
		str1++;
		str2++;
}
	return *str1-*str2;
}

char *mstrchr(char *str, char a){
	while(*str!='\0'){
		if(*str == a){
			return (char*)str;
		}
	str++;
}
	return NULL;
}

char *mstrstr(char *str, char *pstr){
	while(*str!='\0'){
		char *s = str;
		char *p = pstr;
		while(*s!='\0' && *p!='\0' && *s==*p){
			s++;
			p++;
}
		if(*p=='\0'){
			return str;
		}
		str++;
}
	return NULL;
}

int main(){
	char a[50] = "adsad";
	char buf[20];
	char b = 'g';
	char c[4] = "ads";
	printf("Len a: %d\n", mstrlen(a));
	mstrcpy(buf, a);
	printf("Copy %s\n", buf);
	char *dup = mstrdup(a);
	printf("Dublirovanie %s\n", dup);
	free(dup);
	char *str = mstrcat(a,c);
	printf("Concatination %s\n", str);
	char *symb = mstrpbrk(a,c);
	if(symb != NULL){
		printf("Search first input sumbol %c position %ld\n", *symb, symb - a);
}
	else{
		printf("Not Found\n");
}
	printf("Compare str %d\n", mstrcmp(a, c));
	char *sym = mstrchr(a, b);
	if(sym != NULL){
	printf("Search symbol in str: symb %c, position %ld\n", *sym, sym-a);
}
	else{
		printf("Not found\n");
}
	char *pstr = mstrstr(a, c);
	if (pstr!=NULL){
	printf("Serach str in str: str %s, position %ld\n", pstr, pstr-a);
}
	else{
		printf("Not found\n");
}
	return 0;
}
