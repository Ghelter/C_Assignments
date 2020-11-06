#include <stdio.h>

int main(void) {  
int inputVal;   
int numDollars;   
int numQuarters;   
int numDimes;   
int numNickels;   
int numPennies;   

scanf("%d", &inputVal);   
if (inputVal <= 0) {      
printf("No change\n");    
} // Could return at this point   

numDollars = inputVal / 100;   
inputVal -= numDollars * 100;

numQuarters = inputVal / 25;   
inputVal -= numQuarters * 25;   

numDimes = inputVal / 10;   
inputVal -= numDimes * 10;   

numNickels = inputVal / 5;   
inputVal -= numNickels * 5;   

numPennies = inputVal;   

if (numDollars > 0) {     
printf("%d", numDollars);      
if (numDollars == 1) {        
printf(" Dollar\n");      
} else {         
printf(" Dollars\n");      
  }   
}   
if (numQuarters > 0) {      
  printf("%d", numQuarters);      
if (numQuarters == 1) {         
  printf(" Quarter\n");      
  } else {        
  printf(" Quarters\n");      
  }   
 }   
 if (numDimes > 0) {     
  printf("%d", numDimes);    
  if (numDimes == 1) {        
  printf(" Dime\n");     
  } else {         
    printf(" Dimes\n");      
    }   
   }
