#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a , b;
    printf("entrer les valeurs de a et b: \n");
    scanf("%f %f",&a,&b);
    
    if(a == b)
    {

        printf("%f=%f",a,b);

     }
    else if (a<b)
    {
        printf("%f<%f",a,b);
    
    }
    else {
        printf("%f>%f",a,b);

    }

    return 0;

}