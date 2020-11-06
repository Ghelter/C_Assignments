#include <stdio.h>
#include <math.h>
#define SIZE 100

void increaseByPercentage(double prices[], int size, double percentage) {
  
   int i;
   for(i = 0; i < size; i++) {
       prices[i] = prices[i] + prices[i] * percentage / 100;
   }
}

double calculateTotalPrice(double prices[], int size ){
   int i;
   double total = 0;
   for(i = 0; i < size; i++){
       total += prices[i];
   }
   return total;
}

void getPrices(double prices[], int size){
   int i;
   for(i = 0; i < size; i++){
       printf("Item #%d: Enter price: ", i + 1);
       scanf("%lf", &prices[i]);
   }
}

void displayPrices(double prices[], int size){
   int i;
   for(i = 0; i < size; i++){
       printf("Item #%d: Price: $%.2lf\n", i + 1, prices[i]);
  
   }
}

int main(){
  
   double prices[SIZE];
   double PERCENTAGE_HIKE = 5.00;
   double totalBefore; 
   double totalAfter;
   int i;
  
   getPrices(prices, SIZE);
   totalBefore = calculateTotalPrice(prices, SIZE);
   increaseByPercentage(prices, SIZE, PERCENTAGE_HIKE);
   printf("Prices after increase:\n");
   displayPrices(prices, SIZE);
   totalAfter = calculateTotalPrice(prices, SIZE);
   printf("Total Price (before increase) $%.2lf\n", totalBefore);
   printf("Total Price (after increase) $%.2lf\n", totalAfter);
  
}

///////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <math.h>

int main() {
int loan;
int deposit;

printf("Enter Loan Amount: ");

scanf("%d", &loan);

printf("Loan amount: $%d", loan);

if (loan < 5000) {

deposit = loan * 0.10;

printf("\nDeposit Amount Required: $%d", deposit);

} else if (loan < 10000) {

deposit = 100 + (loan * 0.05);

printf("\nDeposit Amount Required: $%d", deposit);

} else if (loan < 20000) {

deposit = 400 + (loan * 0.03);

printf("\nDeposit Amount Required: $%d", deposit);
  
} else {   

printf("\nLoans in excess of $20000 are not allowed.");

}
  return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


#include <math.h>


 


int main() {

int i;
float valuesCelsius[20];
float valuesFahrenheit[20];
float add = 0;
float avg;

printf("Enter 20 celcius temperatures: ");
  
for (i = 1; i <= 20; i++) {
scanf("%f", &valuesCelsius[i]);
}

for (i = 1; i < 20; i++)
valuesFahrenheit[i] = (1.8 * valuesCelsius[i]) + 32;

for (i = 1; i < 20; i++)

printf("\n%.2f  in Celcius is = %.2f Fahrenheit", valuesCelsius[i], valuesFahrenheit[i]);
printf("\nAll temperatures Processed");
  
for (i = 1; i < 20; i++)
{
    add += valuesFahrenheit[i];
}
avg = add / 20;

printf("\nThe average of all temperatures in Fahrenheit is: %.2f", avg);
  
  return 0;
}
