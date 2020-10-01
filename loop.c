#include<stdio.h>
int main()

{
int i,j,k=1;
for(j=1;j<=5;j++)
{
for(i=1;i<=j;i++)
printf("%d ",k++);
printf("\n");
}
return 0;
}
