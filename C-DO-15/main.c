#include <stdio.h>
#include "hash_32tabl.h"

int main(){
	struct HashTable *table;
	init_table(table);
	add_value(table, 1, 2);
	add_value(table, 65, 30);
	search_value(table, 65);
	add_value(table, 1, 2);
	search_value(table, 65);
	search_value(table, 1);
	remove_value(table, 1);
	return 0;
}
