
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
 
 
int main()
{
	printf("Name		Bilal Azhar\nRoll#		Bcs-f15-44(morning)\n");
 	int n=mkfifo("/home/cabox/workspace/ass5fifo", 0777);
 	printf("%d",n);
  		if(n==0)
		{
   			 printf("Success FIFO is create...\n");
	 	 }
		else 
		{
    			printf("Fail to create FIFO...\n");
 		 }
 
   
    	return 0;
}
