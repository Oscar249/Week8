#include<stdio.h>
char test[1000];
char test2[1000];
int main() 
{
    int m=0,a;
    int xd; /*declare the variables*/
    printf("give me the size of array\n");
    fgets(test,sizeof(test),stdin);
    sscanf(test,"%d",&xd); /*I want the size of the array*/
    int v[xd]; /*I put the variable*/
    printf("give the numbers of the array\n");
    for(int i=0;i<xd;i++){
      fgets(test,sizeof(test),stdin);
      sscanf(test,"%d",&v[i]);
      /*scan in a for each defined variable and store them in the array*/
    }
    printf("give me the number you want to know how many times it appears in the array\n");
    fgets(test2,sizeof(test2),stdin);
    sscanf(test2,"%d",&m); 
    m = v[0];  /*I´M going to save a variable in the m condition*/
    for(int i = 1; i < xd; ++i) 
    {
        if(v[i] == m) 
        {
            m=m+1; 

        }
    }
    printf("the selected number is repeated %d times\n", m); /*Print the result*/
    return 0;
}
