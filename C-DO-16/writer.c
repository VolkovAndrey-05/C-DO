#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main(){
	int fd[2];
	pid_t pid;

	if(pipe(fd)<0) exit(1);
	
	pid = fork();
	if(pid<0) exit(1);
	else if(pid==0){
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
		close(fd[1]);
		execl("./reader", "reader", NULL);
		exit(1);
}
	else{
		close(fd[0]);
		char buf[10] = "Hello\n";
		for(int i = 0; i<5; i++){
			write(fd[1], buf, strlen(buf));
			sleep(1);
}
}
	close(fd[1]);
	return 0;
}
