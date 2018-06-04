#include<stdlib.h>
#include <dirent.h> 
#include <stdio.h> 
#include <unistd.h>

int main(void) {
	printf("\nName Bilal azhar \nBcs_F15_44(Morning)\n");
	int count=1;
  DIR *d;
  char *buf;
  buf=(char *)malloc(100*sizeof(char));
  getcwd(buf,100);
  struct dirent *dir;
  d = opendir(".");
	printf("\n\n   FileName			Directory_contain_Files\n\n");
  if (d) {
   while ((dir = readdir(d)) != NULL) {
      printf("%d   %s			%s\n",count++, dir->d_name,buf);
    }
    closedir(d);
  }
  return(0);
}

