#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct DataTuple{
	char * text;
	int dnumber;
	double fnumber;
};

void parsString(struct DataTuple *tuple, char *data){ 
	char *token;
	token = strtok(data, "\t");
	tuple->dnumber = atoi(token);
	token = strtok(NULL, "\t");
	tuple->text = token;
	token = strtok(NULL, "\t");
	tuple->fnumber = atof(token);
}

int main(){
	char data[5][25] = {"10\tRed\t10.876",
			"2\tBlue\t1.6578",
			"65473\tGreen\t543.7654",
			"5432345\tBrown\t76.8765",
			"54289\tGrey\t8.09400"};
	struct DataTuple tuples[5];
	for(size_t i = 0; i<5; i++){
		parsString(&tuples[i],data[i]);
		printf("%d, %s, %lf\n", tuples[i].dnumber, tuples[i].text,
			tuples[i].fnumber);
}
	return 0;
}
