#include<stdio.h>
#include<math.h>
int main()
{
    float nmbr1 , nmbr2, somme , soustr , divis , prdt ;
    float racine, puissance;
    char operation ;
    double cosinus;
    printf("donner la valeur du nombre 1 : \n");
    scanf("%f",& nmbr1);
    printf("donner la valeur du Nombre 2: \n");
    scanf("%f",& nmbr2);
    printf("choisiszze votre operation : \n");
    scanf(" %c",& operation);
    
    switch (operation){
    case '+':
        somme=nmbr1+nmbr2;
        printf("%f",somme);
          break;
    case '-':
        soustr=nmbr1-nmbr2;
        printf("%f",soustr);
        break;
    case'/':
        divis=nmbr1/nmbr2;
        nmbr2!=0;
        printf("%f",divis);
        if()
        break;
    case'*':
        prdt=nmbr1*nmbr2;
        printf("%f",prdt);
        break;       
    case'^';
        puissance=pow(nmbr1,nmbr2);
        printf("%f",puissance);
    }
    if()
return 0;
