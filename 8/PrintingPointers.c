#include <stdio.h>

int main(void) {
   int* numItemsPointer;
   int numItems;

   scanf("%d", &numItems);


   /* Your solution goes here  */
   if (numItems < 0){
    numItemsPointer = NULL;
    }
    else {
    numItemsPointer = &numItems;
    numItems = numItems * 10;
    }
   

   if (numItemsPointer == NULL) {
      printf("Items are negative\n");
   }
   else {
      printf("Items: %d\n", *numItemsPointer);
   }

   return 0;
}
