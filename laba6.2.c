#include <stdio.h>
#include <malloc.h>

int main()
{
  int a;
  scanf("%d",&a);
  char* b=(char*)malloc(a*sizeof(char));
  scanf("%s",b);
  int i;
  for (i=0;i<a;i++){
      printf("%c",b[i]);
  }
}

