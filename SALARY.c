#include<stdio.h>
main()
{
float salary,TA,DA,tax,GS,NS;
printf("enter the values of salary,TA,DA,tax");
scanf("%f%f%f%f",&salary,&TA,&DA,&tax);
GS=salary+TA+DA;
NS=GS-tax;
printf( "GROSS SALARY= %f ",GS);
printf( "NET SALARY= %f ",NS);
}