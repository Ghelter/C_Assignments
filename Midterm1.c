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

//Problem 13 on midterm.
