#include <stdio.h>

int main () {
   char userName[50];
   int tries = 0;

   while (tries < 3)
   {
      printf("Enter a string : ");
      fgets(userName, sizeof userName, stdin);
      printf("You entered: %s \n", userName);
      tries++;
      printf("%d \n",tries);
   }
   
  
   return(0);
}