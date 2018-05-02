#include <sys/syscall.h> 
#include <sys/types.h>
#include <stdio.h>
   #include <stdlib.h>
   #include<unistd.h>
   int main()
   {
      FILE *fp;
      int i;
   
      fp = fopen("store.dat", "w");
      if (fp == NULL) {
         printf("I couldn't open store.dat for writing.\n");
         exit(0);
      }
   
     fprintf(fp,"process having id : %d\n", getpid());
	 fprintf(fp,"user id is : %d\n", getuid());
	 fprintf(fp,"group id is: %d\n", getgid());
	fprintf (fp,"Thread id %ld\n" , syscall (SYS_gettid ));
	fprintf(fp,"PATH : %s\n", getenv("PATH"));
   fprintf(fp,"HOME : %s\n", getenv("HOME"));
   fprintf(fp,"ROOT : %s\n", getenv("ROOT"));
   fprintf(fp,"MAIL :%s \n", getenv("MAIL"));
   fprintf(fp,"SHELL : %s\n", getenv("SHELL"));
   fprintf(fp,"TERM : %s\n", getenv("TERM"));
   fprintf(fp,"USERS : %s\n", getenv("USERS"));
   fprintf(fp,"LS_COLORS : %s\n", getenv("LS_COLORS"));
   fclose(fp);
      return 0;
   }
