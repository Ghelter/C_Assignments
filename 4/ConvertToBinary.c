#include <stdio.h>

int main(void) {

   //printf("decimal number: ");
   int n;
   scanf("%d\n", &n);
   char binary[32];
   int i = 0;
   int value = n;
   while(n > 0)
   {
       binary[i]= n % 2;
       n = n / 2;
       i++;
   }
   int j = 0;
   //printf("%d", value);
   for(j = 0; j < i; j++)
   {
       printf("%d", binary[j]);
       
   }
   printf("\n");
   return 0;
}
