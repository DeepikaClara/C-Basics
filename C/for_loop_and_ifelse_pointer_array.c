//to print using for loop numbers lower case from 1 to 9 within the limit shared as input and greater than 9, if even then print even else odd

#include <stdio.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	   char *numbers[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
        for(i =a;i<=b;i++)
        {
            //printf("%d",i);
            if(i>=1 && i<=9)
            {
                printf("%s\n",numbers[i]);
            }
            else if (i>9) 
                {
                    if((i%2) == 0)
                    {
                   printf("even\n"); 
                    }
                    else 
                    {
                    printf("odd\n");
                    }
            
                } 
    
 
        }

}