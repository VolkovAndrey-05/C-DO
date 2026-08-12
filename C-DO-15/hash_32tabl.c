#include <stdio.h>
#include "hash_32tabl.h"

void init_table(struct HashTable *table){
	for( int i = 0; i<32; i++) table->node[i].key = 0;
}

int hash_func(int key){
	int hash = key % 32;
	if (key < 0) hash += 32;
	return hash;
}

void add_value(struct HashTable *table, int key, int value){
	if(value>31){
		printf("Value is not diapason\n");
		return;
}
	int index = hash_func(key);
	struct HashNode *node = table->node+index; 
	node->key = key;
	node->value = value;
}

void search_value(struct HashTable *table, int key){
	int index = hash_func(key);
	struct HashNode *node = table->node+index;
	if (node->key == key) printf("%d\n", node->value);
	else printf("Not found\n");
}

void remove_value(struct HashTable *table, int key){
	int index = hash_func(key);
	struct HashNode *node = table->node+index;
	node->key = 0;
	node->value = 0;
}
