#include <stdio.h>
#include <string.h>
int main(void) {
  char sentence[1000];
  char sentence2[2000];
  printf("give a word\n");
  fgets(sentence, sizeof(sentence), stdin);
  sscanf(sentence,"%[^\n]s",sentence2);
  int words = 0; /*whole where we are going to store the no. of words*/
  printf("sentence: %s\n", sentence2); /*I print the array with %s*/
words = quantityWords(sentence2);

printf("\n");
printf("the amount of the words is: %d\n",words);
  }


  int quantityWords(char *fra)/*begins on the main part*/
   {
     int num = 0;
char cActual;
char cPrevious = ' ';
while (*fra != '\0') 

{
  cActual=*fra;  

 if (cActual == ' ' && cPrevious !=' '){
    num=num+1;
  }
  cPrevious = cActual;
  fra++; /*each character is retrieved and returned */
}
if (cActual != ' '){
  num=num+1; /*if there is no space at the end, add one more word*/
}
return num; /*I return what I have in num*/
  }
