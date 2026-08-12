#include <stdio.h>
#include "hash_49tabl.h"

void init_table2(struct HashTable2 *table){
	for( int i = 0; i<49; i++) table->node[i].key = 0;
}

int hash_func2(int key){
	int hash = key % 49;
	if (key < 0) hash += 49;
	return hash;
}

void add_value2(struct HashTable2 *table, int key, int value){
	if(value>48){
		printf("Value is not diapason\n");
		return;
}
	int index = hash_func2(key);
	struct HashNode2 *node = table->node+index; 
	node->key = key;
	node->value = value;
}

void search_value2(struct HashTable2 *table, int key){
	int index = hash_func2(key);
	struct HashNode2 *node = table->node+index;
	if (node->key == key) printf("%d\n", node->value);
	else printf("Not found\n");
}

void remove_value2(struct HashTable2 *table, int key){
	int index = hash_func2(key);
	struct HashNode2 *node = table->node+index;
	node->key = 0;
	node->value = 0;
}
