#include<stdio.h>

int main ()
{
    int x;
    printf("veuillez entrer le chiffre: \n");
    scanf("%i",&x);
    if (x%2==0){
       printf("le chiffre %i est paire ",x);
    }
    else {
        printf("le chiffre %i est IMpaire ",x);
    }
    
    return 0;
}