#include <stdio.h>

int main(void) {
  const int NUM_ELEMENTS = 20;
   int userVals[NUM_ELEMENTS];
   int numbers; 
   int i;
   
   scanf("%d", &numbers);
   
   for (i = 0; i < numbers; i++) {
      scanf("%d", &userVals[i]);   
   } 
 
   for (i = numbers-1; i >= 0; i--) {
      printf("%d ", userVals[i]);
   }
   printf("\n");
 
   return 0;
}
