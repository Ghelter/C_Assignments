#include <stdio.h>
#include <math.h>                  // Note: Needed for math functions in part (3)

int main(void) {
   double wallHeight;
   double wallWidth;
   double wallArea;
   double paintNeeded;
   int a;
   

   printf("Enter wall height (feet):\n");
   scanf("%lf", &wallHeight);
   //wallWidth = 10.0;               // FIXME (1): Prompt user to input wall's width
   printf("Enter wall width (feet):\n");
   scanf("%lf", &wallWidth);
   wallArea = (wallWidth * wallHeight);
   
   // Calculate and output wall area
   //wallArea = 0.0;                 // FIXME (1): Calculate the wall's area
   printf("Wall area: %0.2lf square feet\n", wallArea);        // FIXME (1): Finish the output statement
   
   // FIXME (2): Calculate and output the amount of paint in gallons needed to paint the wall
   paintNeeded = (wallArea / 350);
   printf("Paint needed: %0.2lf gallons\n", paintNeeded);
    
    
   // FIXME (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer
   a = round(paintNeeded);
   printf("Cans needed: %d can(s)\n", a);
   
   return 0;
}