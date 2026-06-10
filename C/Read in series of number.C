/* Read in a series of numbers from a set of data. Print each number as you read it in. when the sum of the numbers becomes 100 or more, print a message saying that a total of 100 has been reached and stop processing. However if you read in the number 17 before reaching 100, print the message giving the sum so far and terminate the program at that point.

*/
#include <stdio.h>

int main() {
   int num, sum = 0;
   printf("Printing series of numbers and when sum becomes 100 or more, stop processing further");
   printf("Before reaching 100, when number is 17, then print sum so far and stop processing further\n");
   while(scanf("%d",&num) ==1)
   {
        printf("Read number: %d\n",num);
        sum += num;
        if( num == 17)
        {
            printf("Read number 17, so stopping process and Sum is :%d\n",sum);
            break;
        }
        if(sum >= 100)
        {
            printf("Total has reached 100, Sum is: %d",sum);
            break;
        }
        
        
      
        
   }
   

 
}