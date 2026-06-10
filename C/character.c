#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char c;
    scanf("%c", &c);
    printf("%c\n", c);
    char s[100];
     scanf("%s",s);
     printf("%s\n",s);
     char sen[1000];
     scanf(" %[^\n]%*s",sen);
     printf("%s",sen);  
    
}