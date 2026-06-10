#include <stdio.h>
#include <stdlib.h>
#define num 1000
int main() {
   char *dataFromSoldier;
   dataFromSoldier = (char*)malloc(num * (sizeof(char)));
   
   if(dataFromSoldier == NULL)
   {
       printf("Memory Allocation Failed");
   }
   fgets(dataFromSoldier,num,stdin);
   
   for(int i=0;dataFromSoldier[i]!='\0';i++)
   {
       if(dataFromSoldier[i] == ' ' || dataFromSoldier[i] == '\n')
       { 
         printf("\n");  
       }
       else
       printf("%c",dataFromSoldier[i]);
   }
   free(dataFromSoldier);
}