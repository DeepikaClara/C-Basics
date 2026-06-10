/*Sultan of RedValley has decided to give his daughter, who was born on the last day of June, a special birthday gift. On his first day of June, he will give her 1( 1 times 1) diamond; on the second day, he will give her 4(2 times 2) diamonds; and so on, until the last day of June, when he will give her 30 times 30 diamonds. The sultan has asked you to determine the total number of diamonds. Write a C program to find the number.
*/
#include <stdio.h>
//#define LIMIT 27
int main() {
   
    printf("Sultan's Birthday Surprise for his daughter\n");
    int day,diamond_count,limit;
    int gifted_diamonds,total_diamonds=0;
    printf("Enter the no.of.days till which diamonds to be gifted: ");
    scanf("\t%d",&limit);
    for(day=1;day<=limit;day++)
    {
        diamond_count = day;
        gifted_diamonds = diamond_count * diamond_count;
        total_diamonds += gifted_diamonds;
       /* printf("Diamond gifted on day %d is: %d\n",day,gifted_diamonds);
       */
    }
    printf("Total diamonds will be gifted in whole June month: %d",total_diamonds);
    return 0;
}