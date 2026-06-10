
#include <stdio.h>






int main()
{
   
    char *number[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
int n;
    scanf("%d",&n);
    if(n>=1 && n<=9)
    {
        printf("%s",number[n]);
    }
    else
    {
        printf("Greater than 9");
    }

    return 0;
}

