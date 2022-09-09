#include<stdio.h>
int main()
{
    unsigned int nmbr=10;
    unsigned int a;
    printf("take a guess: ");
    do {
          scanf("%d",&a);
          if(a<nmbr)
          {
            printf("take a higher guess!");
        
          }
           else if(a>nmbr)
          {
            printf("take a lower guess!");
        
          }
           else
          {
            printf("Wohooo u won!");
        
          }
    }
    while (nmbr!=a);
    return 0;
}