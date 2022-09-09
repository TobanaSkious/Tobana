#include<stdio.h>
#include<stdlib.h>
int main()
{
    char nom[20];
    int age;
    printf("entrez votre nom: \n");
    scanf("%s",&nom);
    printf("entrer votre age : \n");
    scanf("%d", &age);
    printf("votre nom et age sont =%s,%d",nom,age);
}