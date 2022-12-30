#include <stdio.h>
#include <malloc.h>

int main()
{
  char a[4]={[0]'W',[1]'O',[2]'R',[3]'K'};
  int i;
  for (i = 0; i<4; i++) 
  {
    printf("a[%d]:%c\n",i,*(a+i));
  }
}




