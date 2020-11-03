#include <stdio.h>

int main(void) {

   int average = 0, max = -1, n, count = 0;
    
    scanf("%d",&n);
    while(n>=0){
       count += 1;
       average += n;
       if(n > max){
          max = n;
      }
      scanf("%d",&n);
   }
   average = average/count;
   printf("%d %d\n",average,max);

   return 0;
}