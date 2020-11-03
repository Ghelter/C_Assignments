#include <stdio.h>

/* Define your function here */

   void GetUserValues( int userValues[], int numValues){
   for(int i = 0;i<numValues;i++){
      scanf("%d",&userValues[i]);
   }
}

void OutputIntsLessThanOrEqualToThreshold(int userValues[], int maxVal, int numValues){
   for(int i = 0;i<numValues;i++){
      if(userValues[i]<maxVal){
         printf("%d ",userValues[i]);
      }
   }
   printf("\n");
}


int main(void) {

   /* Type your code here. */

   int userValues[20]; 
   int size; 
   int upperThreshold;
   
   scanf("%d",&size);
   GetUserValues(userValues,size);
   scanf("%d",&upperThreshold);
   OutputIntsLessThanOrEqualToThreshold(userValues,upperThreshold,size);

   return 0;
}
