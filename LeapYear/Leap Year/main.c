#include <stdio.h>
#include <stdlib.h>

int main()
{
 int check_year;
 int continue_exit;

 start_program:
 printf("Enter the year:");
 scanf("%d",&check_year);
 if(check_year % 4 == 0){
   printf("The year %d is a leap year.\n",check_year);
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
   printf("The year %d is not a leap year\n",check_year);
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
