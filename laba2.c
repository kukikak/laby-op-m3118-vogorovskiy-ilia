#include <stdio.h>
#include <math.h>

int main()
{
 float z1,z2,a;
 printf("oboznachte a=");
 scanf("%f",&a );
 z1=1-1/4*(sin(2*a)*sin(2*a))+cos(2*a);
 z2=cos(a)*cos(a)+cos(a)*cos(a)*cos(a)*cos(a);
 printf("*z1=%f\nz2=%f",z1,z2);
 return 0;
}
