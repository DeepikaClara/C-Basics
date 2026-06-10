#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

/* General way of achieving
 for(i = (num-1); i >= 0; i--)
 {
        printf("%d ", arr[i]);
 }
  */ 
/* Reversing array using pointer*/
//if arr={1,2,3,4}
int temp;
int *start = arr;//start points to first element =1
int *end = arr + (num-1);//end pointer points to the second element=4

while(start<end)
{
    temp =*start;//temp=1
    *start= *end;//start=4
    *end = temp;//end=1
     start++;
     end--;
}

for(int i=0;i<num;i++)
{
    printf("%d",arr[i]);
}
    return 0;
}