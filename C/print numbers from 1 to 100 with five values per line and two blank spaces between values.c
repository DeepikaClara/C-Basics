/* print numbers from 1 to 100 with five values per line and two blank spaces between values
90  91  92  93  94
95  96  97  98  99
*/
#include <stdio.h>

int main() 
{
int n;
for(n=1;n<100;n++)
{
    printf("%d",n);
    if(n%5 != 0)
    {
        printf("\t\t");
    }
    else if(n%5 == 0)
    {
        printf("\n");
    }
}
  
}