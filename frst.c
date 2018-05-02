//#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
       printf("process having id : %d\n", getpid());
	 printf("user id is : %d\n", getuid());
	 printf("group id is: %d\n", getgid());
	printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));
   printf("MAIL :%s \n", getenv("MAIL"));
   printf("SHELL : %s\n", getenv("SHELL"));
   printf("TERM : %s\n", getenv("TERM"));
   printf("USERS : %s\n", getenv("USERS"));
   printf("LS_COLORS : %s\n", getenv("LS_COLORS"));
        return 0;
}
