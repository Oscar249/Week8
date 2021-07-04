#include <stdio.h>
#include <string.h>
char p[200]; 
int main(void)
{
    char test[400]; 
    printf("enter a testo:\n");
    fgets(test,sizeof(test),stdin);
    sscanf(test,"%[^\n]s",p); 
    jump(p);
}
    int jump(char *xd)
    {
    char lets extract a character from a name;  
    char prev =' ';
    int m=0,n=0; 
    printf("you put in the following:\n%s \n",p);
    printf("replacing common hyphens with underscores would be: \n");
    while (*xd!='\0') 
    {
    letsextractacharacterfromyourname=*xd; 
      if(letsextractacharacterfromyourname=='-'){ 
        printf("_"); 
      }
      else {printf("%c",letsextractacharacterfromyourname);}
      xd++;
      
    }
    return 0;
    
    }
