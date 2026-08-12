#include <stdio.h>
#include "hash_32tabl.h"
#include "hash_49tabl.h"
int main(){

        struct HashTable2 table2;
        init_table2(&table2);
        add_value2(&table2, 65, 30);
        search_value2(&table2, 65);
        add_value2(&table2, 1, 2);
        search_value2(&table2, 1);
        remove_value2(&table2, 1);
	return 0;
}
