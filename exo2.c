#include<stdio.h>
#include<stdlib.h>
int main()
{
   int produits_vendus;
   int prix_unite;
   int montant_total;
    printf("veuillez enttrez le numero de produits vendus: \n" );
    scanf("%d",&produits_vendus);
        printf("veuillez entre le prix d'unité: \n");
        scanf("%d",&prix_unite);
    montant_total=prix_unite*produits_vendus
    printf("le montant total est=%d",montant_total);
    
      
    return 0;
}
