#include<stdio.h>
#include<string.h>
int cmp(const void* x,const void* y)
{
return (*(int*)x)-(*(int*)y);
}
int main()
{
int num[1000]={0,},k,i,n;
char a[1000];
scanf("%s %d",a,&k);
n=strlen(a);
for(i=0;i<n;i++)
{
num[i]=a[i]-48;
}
qsort(num,n,sizeof(num[0]),cmp);
for(i=0;i<n-k;i++)
{
printf("%d",num[i]);
}
return 0;
}
