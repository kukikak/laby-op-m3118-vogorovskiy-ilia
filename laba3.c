#include <stdio.h>

int main()
{
int a;
printf("1.число:");
scanf("%d",&a);
printf("2.hex: %x\n", a);
printf("3.oct: %o\n", a);
int b = a >> 1;
printf("oct >> 1: %o\n", b);
printf("4.oct: %o\n", a);
int c=~a;
printf("отриц: %o\n", c);
int r;
printf("5.число:");
scanf("%o", &r);
int h =a^b;
printf("^: %o", h);
}
