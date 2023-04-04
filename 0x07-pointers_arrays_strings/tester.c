#include <stdio.h>
#include <string.h>

/**
 * This function is for testing all my code on local before pushing it on github 
*/
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   
   return(0);
}