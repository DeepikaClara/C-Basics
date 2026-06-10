/* computer programmer wants to give her boyfriend several pieces of candy every day during June, starting with six on the first day and increasing by five more pieces each day. Write a program that prints the days of month( nos from 1 to 30), together with the no.of pieces of candy to be given on that day
*/
#include <stdio.h>

int main() 
{
    int day=1, candy=6;
    printf("%d %d\n",day, candy);
    for(day=2;day<=30;day++)
    {
      candy = candy+5;
      printf("%d %d\n",day, candy);
    }
  
}