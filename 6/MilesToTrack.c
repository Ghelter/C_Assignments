#include <stdio.h>

/* Define your function here */ 
 double MilesToLaps(double userMiles) {
   
   //double userMiles / 0.25;
   
      return userMiles / 0.25;
}

int main(void) {

   /* Type your code here. Your code must call the function.  */

   double miles;
   
   scanf("%lf", &miles);
   
   printf("%0.2lf\n", MilesToLaps(miles));

   return 0;
}
