#include <stdio.h>
#include <string.h>

int main(void) {
   char personName[100];
   char searchChar;
   char* searchResult = NULL;

   fgets(personName, 100, stdin);
   scanf("%c", &searchChar);

   /* Your solution goes here  */

   int i, len;
   len = strlen(personName);
   for (i = 0; i < len; i++) {
   if(personName[i] == searchChar)
   {
    searchResult='y';
   }
}


   if (searchResult != NULL) {
      printf("Character found.\n");
   }
   else {
      printf("Character not found.\n");
   }

   return 0;
}