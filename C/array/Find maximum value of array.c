//Find maximum value of array

#include <stdio.h>
#include <stdlib.h>
//#define num 100
int main()
{
    int arr[5]={5,3,4,6,7};
    int compare= 0,high=0;
    //arr =(int*)malloc(num* sizeof(int));
    for(int i=0;i<5;i++)
    {
        
        if(compare<=arr[i])//6<=7
        {
            high = arr[i];//high=7
             compare=arr[i];//low=7
             printf("%d\n",high);
        }
        
      
    }
     printf("%d",high); 
    //free(arr);
}