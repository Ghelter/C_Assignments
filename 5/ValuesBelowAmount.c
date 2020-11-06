#include <stdio.h

>int main(void) {   
const int NUM_ELEMENTS = 20;   
int userValues[NUM_ELEMENTS];    // Set of data specified by the user   
int numValues;   
int currValue;   
int upperThreshold;    
int i;   
int j;
   // Integer indicating the number of integers that follow      
scanf("%d", &numValues);   

// Gets list of integers from input   
for (i = 0; i < numValues; ++i) {      
scanf("%d", &currValue);      
userValues[i] = currValue;   
}   

// Last value from the input indicating threshold      
scanf("%d", &upperThreshold);   

// Output all integers less than or equal to the threshold      
for (j = 0; j < numValues; ++j) {      
if (userValues[j] <= upperThreshold) {         
  printf("%d ", userValues[j]);      
    }   
  }   
  
  printf("\n");   
  
  return 0;
  }
