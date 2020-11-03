#include <stdio.h>

/* Define your function here */ 
double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon);

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
   
   double dollarCost = 0;
   dollarCost = (dollarsPerGallon * drivenMiles) / milesPerGallon;
   
}

int main(void) {


    double miles = 0;
    double gasPerGallon = 0;
    
   /* Type your code here. */
   //printf("Please enter miles driven: ");
   scanf("%lf", &miles);
   //printf("Please enter miles per gallon: ");
   scanf("%lf", &gasPerGallon);
   
   //drivingCost(miles, gasPerGallon, 10);

   printf("%0.2lf %0.2lf %0.2lf\n", DrivingCost(miles, gasPerGallon, 10));
   printf("%0.2lf %0.2lf %0.2lf\n", DrivingCost(miles, gasPerGallon, 50));
   printf("%0.2lf %0.2lf %0.2lf", DrivingCost(miles, gasPerGallon, 400));


   return 0;
}