#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char userInp[12];
   char userName[] = "lhssan";
   int tries = 0;

   while (tries < 3)
   {
      printf("Enter a username : ");
      scanf("%s",userInp);

            
      if (strcmp(userInp, userName) == 0)
      {
         printf("hello lhssan \n");
         tries = 3;
      }
      else
      {
         printf("hi %s you i don't know you try again \n",userInp);
         tries++;
      }
      
      
   }
   
   return(0);
}