#include <stdio.h>
#include <stdlib.h>

int main () {
   char userInp[50];
   char userName[] = "lhssan";
   int tries = 0;

   while (tries < 3)
   {
      printf("Enter a username : ");
      fgets(userInp, sizeof userInp, stdin);

      if (userInp == userName )
      {
        
         printf("Hello %s You're number is: %d \n",userName , 16);
         exit(1);
         
      }
      else if(userInp!=userName){ tries++; printf("%d \n",tries);};
      
      
   }
   
   
  
   return(0);
}