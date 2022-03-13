#include <stdio.h>

int main(void){
  printf("befor fork\n");
  int pid = fork();
  printf("pid = %d   childepid = %d\n", getpid(),pid);
  
  if(pid==0){
    pid = fork();
    printf("pid = %d   childepid = %d\n", getpid(),pid);
    if(pid>0){
      pid = fork();
      printf("pid = %d   childepid = %d\n", getpid(),pid);
      if(pid>0){
	pid = fork();
	printf("pid = %d   childepid = %d\n", getpid(),pid);
      }
    }
  }
  else if(pid>0){
    pid = fork();
    printf("pid = %d   childepid = %d\n", getpid(),pid);
    if(pid==0){
    pid = fork();
    printf("pid = %d   childepid = %d\n", getpid(),pid);
    if(pid>0){
      pid = fork();
      printf("pid = %d   childepid = %d\n", getpid(),pid);
      if(pid>0){
	pid = fork();
	printf("pid = %d   childepid = %d\n", getpid(),pid);
      }
    }
  }
    
  }
  printf("process %d end\n",getpid());
  

}
