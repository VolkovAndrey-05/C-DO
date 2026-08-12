#ifndef HASHTABLE_H


struct HashNode{
	int key;
	int value;
};

struct HashTable{
	struct HashNode *node;
};

void init_table(struct HashTable *table);

int hash_func(int key);

void add_value(struct HashTable *table, int key, int value);

void search_value(struct HashTable *table, int key);

void remove_value(struct HashTable *table, int key);

#endif
