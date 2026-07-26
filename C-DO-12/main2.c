#include <stdio.h>
#include <string.h>
struct Node{
	char type[10];
	void *value;
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
		switch(cur->type[0]){
			case 'c':
				char_output(cur);
				break;
			case 'i':
                                int_output(cur);
                                break;
			case 'u':
                                uint_output(cur);
                                break;
			case 'f':
                                float_output(cur);
                                break;
			case 'd':
                                double_output(cur);
                                break;
			default:
				printf("Don`t type");
				break;
}
		cur = cur->next;
}
	return 0;
}
