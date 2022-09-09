#include<stdio.h>
int main()
{
    int i,variable,d=0;
    
    printf("votre chiffre est : \n");
    scanf("%d",&variable);
  for(i=1;i<=variable;i++){
  if(variable%i==0){
        d++;
  }
  }
   if(d==2){
    printf("le chiffre %d est premier",variable);
    }
    else{
        printf("le chiffre %d n'est pas premier", variable);
    }

return 0;
}