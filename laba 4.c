
#include <stdio.h>
#include <locale.h>

int main()
{
int a;
int min=-3;
int max=6;
printf("число:");
scanf("%d",&a);
printf("число %d входит в (%d;%d):",a,min,max);
int c=max/a;
int b=min/a;
printf("%d",!!(c&b));
int k;
printf("\nчисло:");
scanf("%o",&k);
int d=(k>>5)&1;
printf("%d",d);
}
