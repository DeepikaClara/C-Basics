#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num 100
int main()
{
    char *str;
    int freq[10]={0};
    
    str = (char*)malloc(num * (sizeof(char)));
    if(str == NULL)
    {
      printf("Memory Allocation Failed\n");  
    }
    scanf("%s",str);
    //freq is zero for all 10 array elements.
    for(int i=0;i<strlen(str);i++)
    {
       if(str[i]>='0' && str[i]<='9')
       {
           freq[str[i]-'0']++;
       }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",freq[i]);
    }
    
    free(str);
}