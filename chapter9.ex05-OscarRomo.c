#include<stdio.h>
char test[1000];
char test2[1000];
int main() 
{
    int m;
    int pos = 1;
    int xd; /*declare the variables*/
    printf("give the size of array\n");
    fgets(test,sizeof(test),stdin);
    sscanf(test,"%d",&xd); 

    int v[xd]; /*I put the variable here*/ 
    printf("give th numbers of array\n");
    for(int i=0;i<xd;i++){
      fgets(test,sizeof(test),stdin);
      sscanf(test,"%d",&v[i]);/*I realize the scaning*/
            
    }
    m = v[0];  /*I´m going to save the varible into the m condition*/
    for(int i = 1; i < xd; ++i) 

    {
        if(v[i] > m) /*escaning again*/
        {
            m = v[i]; /*i save the position of the manor*/
            pos = i; /*I locate the position of the variable*/
        }
    }
    printf("the largest number is %d and it is in the position %d\n", m, pos+1); /*print the results*/
    return 0;
}
