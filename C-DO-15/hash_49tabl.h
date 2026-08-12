#ifndef HASHTABLE_H


struct HashNode2{
	int key;
	int value;
};

struct HashTable2{
	struct HashNode2 *node;
};

void init_table2(struct HashTable2 *table);

int hash_func2(int key);

void add_value2(struct HashTable2 *table, int key, int value);

void search_value2(struct HashTable2 *table, int key);

void remove_value2(struct HashTable2 *table, int key);

#endif
