/* program that prints all the nos less than 2000 that are evenly
divisible by 10. e.g., 10 20 30 ...*/
#include <stdio.h>

int main() 
{
  int n, result=0;
  for (n=1;n<2000;n++){
      
    result = n*10;
    if(result<2000)
      {
    printf("%d ",result);
      }
  }
}