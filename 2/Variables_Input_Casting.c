#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
  int userInt;
   double userDouble;
   char userCharacter;
   char userString[10];
   
   // FIXME: Define char and string variables similarly
   
   printf("Enter integer:\n");
   scanf("%d", &userInt);
   printf("Enter double:\n");
   scanf("%lf", &userDouble);
   printf("Enter character:\n");
   scanf(" %c", &userCharacter);
   printf("Enter string:\n");
   scanf("%s", &userString);

   
   // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   printf("%d %lf %c %s\n", userInt,userDouble,userCharacter,userString);
   
   // FIXME (2): Output the four values in reverse
   printf("%s %c %lf %d\n", userString, userCharacter, userDouble, userInt);
   
   // FIXME (3): Cast the double to an integer, and output that integer
   printf("%lf cast to an integer is %d\n", userDouble, (int)userDouble);
    
   return 0;
}