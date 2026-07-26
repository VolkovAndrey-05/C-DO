#include <stdio.h>
#include <string.h>
struct Node{
	char type[10];
	void *value;
	struct Node *next;
};

int main(){
        char a = 'A';
        int b = -10;
        unsigned int c = 20;
        float d = 3.0;
        double e = 123.89;
	struct Node node[5] = {{"char", &a, &node[1]},
				{"int", &b, &node[2]},
				{"uint", &c, &node[3]},
				{"float", &d, &node[4]},
				{"double", &e, NULL}};
	struct Node *cur = &node[0];
	while(cur!=NULL){
		if(strcmp(cur->type, "char")==0) printf("Type %s, value %c, next %p\n", cur->type, *(char*)cur->value, cur->next);
		else if (strcmp(cur->type, "int")==0) printf("Type %s, value %d, next %p\n", cur->type, *(int*)cur->value, cur->next);
		else if (strcmp(cur->type, "uint")==0) printf("Type %s, value %d, next %p\n", cur->type, *(unsigned int*)cur->value, cur->next);
		else if (strcmp(cur->type, "float")==0) printf("Type %s, value %f, next %p\n", cur->type, *(float*)cur->value, cur->next);
		else if (strcmp(cur->type, "double")==0) printf("Type %s, value %lf, next %p\n", cur->type, *(double*)cur->value, cur->next);
		else printf("Don`t type");
		cur = cur->next;
}
	return 0;
}
