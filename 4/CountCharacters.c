#include <stdio.h>
#include <string.h>

int main(void) {

     char ch;
    char str[50];
    int count = 0, i;
    scanf(" %c", &ch);
    scanf("%s", str);
    for (i = 0; i < strlen(str); ++i) {
        if (str[i] == ch) {
            ++count;
        }
    }
    printf("%d\n", count);

   return 0;
}