#include <stdio.h>
#include <string.h>
struct Node{
	char type[10];
	void *value;
	void (*out)();
	struct Node *next;
};

void char_output(struct Node *a){
	printf("Type %s, value %c, next %p\n", a->type, *(char*)a->value, a->next);
}

void int_output(struct Node *a){
        printf("Type %s, value %d, next %p\n", a->type, *(int*)a->value, a->next);
}

void uint_output(struct Node *a){
        printf("Type %s, value %d, next %p\n", a->type, *(unsigned int*)a->value, a->next);
}

void float_output(struct Node *a){
        printf("Type %s, value %f, next %p\n", a->type, *(float*)a->value, a->next);
}

void double_output(struct Node *a){
        printf("Type %s, value %lf, next %p\n", a->type, *(double*)a->value, a->next);
}

void (*res[5])() = {&char_output, &int_output, &uint_output, &float_output, &double_output};

int main(){
        char a = 'A';
        int b = -10;
        unsigned int c = 20;
        float d = 3.0;
        double e = 123.89;
	struct Node node[5] = {{"char", &a, res[0], &node[1]},
				{"int", &b, res[1], &node[2]},
				{"uint", &c, res[2], &node[3]},
				{"float", &d, res[3], &node[4]},
				{"double", &e, res[4], NULL}};
	struct Node *cur = &node[0];
	while(cur!=NULL){
		cur->out(cur);
		cur = cur->next;
}
	return 0;
}
