//Created By 1MS16IS144
#include<stdio.h>
#include<time.h>

void main()
{
int i,n,j,min,temp;
int a[10000];
printf("enter the size of the array \n");
scanf("%d",&n);
for(i=n;i>=1;i--)
a[n-i]=i;
clock_t start,end;
double cpu_time;
start=clock();
for(i=0;i<n-2;i++)
{
min=a[i];
for(j=i+1;j<n-(i+1);j++)
{
if(a[j]>a[min])
{
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
}
}
end=clock();
cpu_time=((double)(end-start))/CLOCKS_PER_SEC;
printf("time is %f",cpu_time);
for(i=0;i<n;i++)
printf(" %d",a[i]);
}
