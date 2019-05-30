#include<stdio.h>
main()
{
float C,M;
printf("enter the value of C");
scanf("%f",&C);
M=C/100;
printf( "conversion of centimeters to meters is= %f m\n  ",M);
printf("enter the value of M");
scanf("%f",&M);
C=M*100;
printf( "conversion of meters  to centimeters is= %f cm ",C);
}