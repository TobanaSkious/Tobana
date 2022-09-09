#include<stdio.h>
#include<math.h>
int main()
{
    int a,somme =0;
    int i,j;
    int dimense;
        
        printf("veuiilez entrer un nombre: ");
        scanf("%i",dimense);
    for(j=0;j<dimense;j++){
        for(i=0;i<100;i++){
        printf("veillez entrer votre nombre : \n");
        scanf("%d",&a);
        if(a>100){
            printf("veuillez entrer un nombre inferieur");
            scanf("%d",&a);

        }else{
            somme = somme +a;
        }
        printf("la somme est= %d", somme);

    }
   
    }
   
    return 0;
}