#include <stdio.h>

int main(void)
{
    printf("Enter a letter(A-Z): ");
    char letter;
    scanf(" %c", &letter);
    ////////////////
    if( letter >= 'A' && letter <= 'Z')
    {
        letter += 32;
        printf("%c", letter);
       
    }
    else if ( letter >= 'a' && letter <= 'z'){
        letter -= 32;
        printf("%c", letter);
      
    }
    
     
}