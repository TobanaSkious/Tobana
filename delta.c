#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,delta,x,x1,x2;
    x=a*pow(x,2)+(b*x)+c;
    printf("entrer les nmbr a et b et c :\n");
    scanf("%f %f %f",&a,&b,&c);
    delta=pow(b,2)-(4*a*c);
    printf("delta = %f", delta);
    if( delta < 0 )
        {
            printf("aucune solution");

        }
            else if (delta=0)
            {
                x=(-b)/(2*a);
                printf("la solution est %f",x);
            }
                else
                {
                    x1= (-b-sqrt(delta))/(2*a);
                    x2= (-b+sqrt(delta))/(2*a);
                    printf("les solutions sont %.2f %.2f",x1,x2);

                }


    return 0;
}
