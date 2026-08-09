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
	FILE *file = fopen("text.txt", "w");
	fprintf(file, "10\tRed\t10.876\n");
	fprintf(file, "2\tBlue\t1.6578\n");
	fprintf(file, "65473\tGreen\t543.7654\n");
	fprintf(file, "5432345\tBrown\t76.8765\n");
	fprintf(file, "54289\tGrey\t8.09400\n");
	fclose(file);
	struct DataTuple tuples[5];
	FILE *file1 = fopen("text.txt", "r");
	char buffer[30];
	for(size_t i = 0; i<5; i++){
		char *start = buffer;
		fgets(start, 30, file1);
		parsString(&tuples[i],start);
		printf("%d, %s, %lf\n", tuples[i].dnumber, tuples[i].text,
			tuples[i].fnumber);
}
	fclose(file1);
	return 0;
}
