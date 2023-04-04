#include <stdio.h>
#include <string.h>
/**
 *void *memcpy(void *dest, const void * src, size_t n)
Parameters
dest − This is pointer to the destination array where the content is to be copied, type-casted to a pointer of type void*.

src − This is pointer to the source of data to be copied, type-casted to a pointer of type void*.

n − This is the number of bytes to be copied.
*/
int main () {
   const char src[50] = "Linking binary at insec";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
