#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
void timer_handler(int signum){}

int main(){
        clock_t start = clock();
	struct timeval t;
        struct tm *info;
        struct itimerval tv;
        struct sigaction as;
	as.sa_handler = &timer_handler;
	as.sa_flags = 0;
	sigaction(SIGALRM, &as, NULL);
	tv.it_value.tv_sec = 1;
	tv.it_value.tv_usec = 0;
	tv.it_interval.tv_sec = 1;
	tv.it_interval.tv_usec = 0;
	setitimer(ITIMER_REAL, &tv, NULL);
        for(int i = 0; i<10; i++){
		pause(); 
		gettimeofday(&t, NULL);
                info = localtime(&t.tv_sec);
                printf("Current time: %d:%d:%d\n", info->tm_hour,
                                                info->tm_min,
                                                info->tm_sec);
}
        clock_t end = clock();
        double cpu_time = ((double)(end-start))/CLOCKS_PER_SEC;
        printf("Processing time: %lf\n", cpu_time);
        return 0;
}
