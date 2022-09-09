#include<stdio.h>
int main ()
{
    int Note1 , Note2 , Note3, moyenne;
    
    printf ("veuillez entrer la note1: \n" );
    scanf ("%d",&Note1);
    printf ("veuillez entrer la note2: \n" );
    scanf ("%d",&Note2);
    printf ("veuillez entrer la note3: \n" );
    scanf ("%d",&Note3);
    moyenne = (Note1+Note2+Note3)/3;
    printf("votre moyenne est: %d\n",moyenne);
    
  if(moyenne=0 && moyenne<5){
     printf("vous etes non admis");

  }
  else if (moyenne>=5 && moyenne<10 ) {
    printf("vous avez un rattrapage");

  }
  else {
    printf("Vous etes admis");
  }

return 0;
}