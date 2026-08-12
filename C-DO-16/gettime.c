#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
int main(){
	clock_t start = clock();
	struct timeval tv;
	struct tm *info;
	for(int i = 0; i<10; i++){
		gettimeofday(&tv, NULL);
		info = localtime(&tv.tv_sec);
		printf("Current time: %d:%d:%d\n", info->tm_hour,
						info->tm_min,
						info->tm_sec);
		sleep(1); 
}
	clock_t end = clock();
	double cpu_time = ((double)(end-start))/CLOCKS_PER_SEC;
	printf("Processing time: %lf\n", cpu_time);
	return 0;
}
