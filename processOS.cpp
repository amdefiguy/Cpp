#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	
	/*frok a child process*/
	pid = fork();
	
	if (pid < 0){/*Error occured*/
	fprintf(stderr,"Fork Failed");
	exit(-1);
}
else if (pid == 0) { /*child process*/
execpl("/bin/ls","ls",NULL);
}
else { /* parent process*/
  /* parent will wait for the child to complete*/
wait(NULL);
printf("Child Complete");
exit(0);

	}
}
