/*Read in data about an employee of a company. Data will contain *employee's ID, hours worked per week and rate of pay per hour*. computer the employee's pay for the week, which is equal to *hours times rate. Print the relevant information about this *employee, then repeat the same steps for the other employees *untill all have been processed. count the no.of employees *processed and print the total at the end.
*/
#include <stdio.h>
 int main()
 {
     int ID;
     double hrs_per_week, pay_per_hour,employees_pay_week,tax;
     int count = 0;
    printf("Enter the Employee ID\n");
        scanf("%d",&ID);
     while(ID != -1111){
        
        printf("Enter the hours employee worked per week\n");
        scanf("%lf", &hrs_per_week);
        printf("Enter the rate of pay per hour\n");
        scanf("%lf",&pay_per_hour);
        employees_pay_week = hrs_per_week * pay_per_hour;
        tax = (employees_pay_week<300) ? (0.15 * employees_pay_week) : (0.28 * employees_pay_week);
        printf("Employee %d' works %0.2f hours per week with rate of pay as $%0.2f and earns $%0.2f for a week with tax $%0.2f\n",ID,hrs_per_week,pay_per_hour,employees_pay_week,tax);
        count++;
        printf("-------------------------------------------\n");
printf("Enter the Employee ID\n");
        scanf("%d",&ID);
     }
     printf("Count of employees computed is %d",count);
    
     
 }