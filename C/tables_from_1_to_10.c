/*Write a C program to produce a multiplication table that covers the numbers from 1 to 10. for ex., one row of the table will show 3, followed by the multiples of 3( 3 3 6 9 ... 30)
*/

#include <stdio.h>
#define LIMIT 10
int main()
{
    int num,table,value;
    //number and its table from 1 to 10 times.
    //continue this from 1 table to 10 table
    for(table=1;table<=10;table++)
    {
        printf("Table = %d | \t",table);
            for(num=1;num<=LIMIT;num++)
            {
                value = table * num;
        
                printf("%d\t",value);
        
            }
        printf("\n");
    }
}