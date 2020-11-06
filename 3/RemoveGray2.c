#include <stdio.h>

int main(void) {  
int redAmount;   
int greenAmount;   
int blueAmount;   
int minValue;   

// Get rgb color values  
scanf("%d", &redAmount);    
scanf("%d", &greenAmount);    
scanf("%d", &blueAmount);    

// Find minimum value   
minValue = redAmount;   
if (greenAmount < minValue) {      
minValue = greenAmount;   
}   

if (blueAmount < minValue) {     
minValue = blueAmount;   
}   

// Subtract minimum value from all colors, thus removing any gray   
redAmount = redAmount - minValue;   
greenAmount = greenAmount - minValue;   
blueAmount = blueAmount - minValue;   

// Output new color values with gray removed   
printf("%d %d %d\n", redAmount, greenAmount, blueAmount);   

return 0;

}
