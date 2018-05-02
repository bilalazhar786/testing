//#define _GNU_SOURCE 
#include <unistd.h> 
#include <sys/syscall.h> 
#include <sys/types.h> 
#include <stdio.h>
int main( int argc , char *argv [ ] ) 
{ 
	printf("Name : Bilal Azhar\nRoll# : BCS-F15-44(morning)\n");
  	printf ("Thread id %ld\n" , syscall (SYS_gettid )); 
printf("Effective user identity %ld\n" ,  syscall (SYS_geteuid ));
printf("Real user id %ld\n" , syscall (SYS_getuid));
printf("Process Id %ld\n" , syscall (SYS_getpid));
printf("Parent process Id %ld\n" , syscall (SYS_getppid));
printf("Group Id %ld\n" , syscall (SYS_getgid));
 	return 0;
}
