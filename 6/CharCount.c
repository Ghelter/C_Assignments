#include <stdio.h>
#include <string.h>
int CountCharacters(char , char[]) ;
int main(void) {   
char inputString[50];   
char inputChar;    

scanf("%c", &inputChar);   
scanf("%s", inputString);   
printf("%d\n", CountCharacters(inputChar, inputString));  
return 0;
}

int CountCharacters(char userChar, char* userString) {   
int numChars;   
int i;   
numChars = 0;   
for (i = 0; i < strlen(userString); ++i) {     
if (userString[i] == userChar) {        
++numChars;     
  }   
}  
return numChars;
}
