#include<stdlib.h>
int main()
{
    int p,i,pr;
    printf("Donnez un entier:\n");
    scanf("%d",&p);
    if(p==0 || p==1) printf("%d n'est pas premier.\n",p);
    else
    {
        pr=1;
        for(i=2;i<p;i++)
        {
            if(p%i==0) {pr=0; break; }
        }
        if(pr==1) printf("%d est premier.\n",p);
        else printf("%d n'est pas premier.\n",p);
    }
    system("pause");
    return 0;
}