#include<stdio.h>
int main()
{
    float x;
    
    printf("entrer le chiffre: \n");
    scanf("%f",&x);
    if(x==(int)x)
    {
        printf("le chiffre %f est entier", x);
    
    }
    else {
        printf ("le chiffre %f n'est pas entier",x);
    }
    return 0;
}
