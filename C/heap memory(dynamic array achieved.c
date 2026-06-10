//heap memory(dynamic array achieved using malloc)  used to store n number of onjects when we don't know exactly how many objects will be collected in real time. for eg., when radar has to look around for n number of missiles approaching our country

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int *arr= (int*)malloc(n * sizeof(int));//heap memory (dynamic array)
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int sum =0;
    for(int j=0;j<n;j++)
    {
        sum += arr[j];
    }
    printf("%d",sum);
}