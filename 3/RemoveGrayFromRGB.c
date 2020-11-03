#include <stdio.h>

int main(void) {

  int color1;
    int color2;
    int color3;
    int gray = 50;
    
    //printf("enter number: \n");
    scanf("%d", &color1);
    
    //printf("enter 2 number: \n");
    scanf("%d", &color2);
    
    //printf("enter 3 number: \n");
    scanf("%d", &color3);
    
    if (color1 >= 50 && color1 <= 255) {
        color1 = color1 - gray;
    }
    
    if (color2 >= 50 && color2 <= 255) {
        color2 = color2 - gray;
    }
    
    if (color3 >= 50 && color3 <= 255) {
        color3 = color3 - gray;
    }
    
    printf("%d %d %d\n", color1, color2, color3);

   return 0;
}
