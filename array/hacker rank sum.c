#include<stdio.h>
int main()
{
int n;
int sum=0;
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i++)
{
 scanf("%d",&array[i]);
 sum=sum+array[i];
}
printf("%d",sum);
}
