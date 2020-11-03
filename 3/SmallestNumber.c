#include <stdio.h>

int main(void) {

  int prim;
    int secon;
    int terc;
    
    scanf("%d", &prim);
    scanf("%d", &secon);
    scanf("%d", &terc);
    
    int minV = prim;
    
    if (secon < minV) minV = secon;
    if (terc < minV) minV = terc;
    
    printf("%d\n", minV);
  

   return 0;
}
