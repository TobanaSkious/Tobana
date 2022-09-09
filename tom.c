#include<stdio.h>
#include<stdlib.h> 
int main ()
{
    float a,b,c;
    printf("les valeurs a et b et c sont: \n");
    scanf(" %f %f %f",&a,&b,&c);
        if(a>b && a>c)
        {
            if(b>c){
                printf("%f>%f>%f",a,b,c);

            }
            
            else if(c>b){
                 printf("%f>%f>%f",a,c,b);
            }
           
        }
        else if (b>a && b>c)
        {
            if(a>c){
                printf("%f>%f>%f",b,a,c);

            }
            
            else if(c>a) {
                printf("%f>%f>%f",b,c,a);

            } 
            
        }
        else if(c>a && c>b)
        {
            if(a>b){
                printf("%f>%f>%f",c,a,b);

            } else if(b>a){
                 printf("%f>%f>%f",c,b,a);

            }
           
            
        }
    return 0;

}