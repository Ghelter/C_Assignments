#include <stdio.h>

int main(void) {
   char triangleChar;
   int triangleHeight;

   printf("Enter a character:\n");
   scanf("%c", &triangleChar);
   
   printf("Enter triangle height:\n");
   scanf("%d", &triangleHeight);
   printf("\n");
       
   int k;
   int l;
   
   for (k = 0; k < triangleHeight; ++k) {
      for (l = 0; l <= k; ++l) {
         printf("%c ", triangleChar);
         }
         printf("\n");
      }
   return 0;
}