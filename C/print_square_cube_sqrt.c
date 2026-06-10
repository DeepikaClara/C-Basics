/*program that prints the table fo the nos from 1 to 30, together with square, cude and square root of each.

*/

#include <stdio.h>
#include <math.h>
int main()
 {
     int num,square,cube;
     float square_root;
     printf(" Number Square    Cube  \t Square Root\n");
     for(num=1;num<=30;num++)
     {
        square =num * num;
        cube = num*num*num;
        square_root = sqrt(num);
      
        printf("   %d    \t%d   \t%d   \t%.1f \n",num,square,cube,square_root);
     }
 }