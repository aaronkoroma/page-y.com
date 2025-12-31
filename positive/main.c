#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
int continue_exit;

start_program:
  printf("Enter a number:");
  scanf("%d",&num);

  if(num >= 0){
    printf("The number %d is a positive number\n",num);
    printf("Continue(1) or Exit(2):");
    scanf("%d",&continue_exit);
  if(continue_exit == 1){
    goto start_program;
  }
  else{
    return 0;
  }
  }
  else{
    printf("The number %d is a negative number\n",num);
    printf("Continue(1) or Exit(2):");
    scanf("%d",&continue_exit);
  if(continue_exit == 1){
    goto start_program;
  }
  else{
    return 0;
  }
  }
goto start_program;
}
