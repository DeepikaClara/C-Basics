/*Bit wise operators
if n=5, a,b can hold only values from 1 to 5 and a<b
after calculating each operation should whether the result is <k which is the limit
if above limit is fine for the result then give the max value received for each bitwise operation out of possible combinations of a and b*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_and=0,max_or=0,max_xor=0;
    int temp=0;
for(int a=1;a<=n;a++)
{
    for(int b=a+1;b<=n;b++)
    {
      //a&b <k then count_and
     
     int result_of_and = a&b;
     if(result_of_and <k)
     {
     if(max_and <result_of_and )
     {
         max_and = result_of_and;
     }
     }
     int result_of_or = a|b;
     if(result_of_or <k)
    {
     if(max_or <result_of_or )
     {
         max_or = result_of_or;
     }
    }
     int result_of_xor = a^b;
     if(result_of_xor <k)
     {
     if(max_xor <result_of_xor )
     {
         max_xor = result_of_xor;
     }
     }
    }
}
 printf("\n %d",max_and);
  printf("\n %d",max_or);
   printf("\n %d",max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

