/* print a table of angles from 0 to 180 degrees, together
 *withthe radian measurement, the sine and the cosine
 *of each angle. Recall that 180 degrees is equal
 *to pi radians. Give pi the value 3.14159 and use 
 *the library functions sin and cos and tan.
 */

#include <stdio.h>
#include <math.h>
int angle;
double pi;
double sine,cosine,tangential;

int main() {
    printf("Angle \tRadian \tSine \tCosine \tTan \n");
    for( angle=0;angle<=180;angle+=45)
    {
       int radian;
       pi = 3.14159;
       radian = angle * (pi/180);
       sine = sin(angle);
       cosine =cos(angle);
       tangential = tan(angle);
       printf("%d \t%f \t%f \t%f \t%f\n",angle,radian,sine,cosine,tangential);
    }
}