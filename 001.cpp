#include<stdio.h>
#define size 10

int x=size,i=0;
static int a[size];
int demo(int x);

int main()
{
	demo(x);
	return 0;
}

int demo(int x)
{
	if(x==1)
	{
		a[i]=x;
		printf("a[%d]=%d\n",i,a[i]);
		i++;
		return 1;
	}
	else
	{
		x+=demo(x-1);
		a[i]=x;
		printf("a[%d]=%d\n",i,a[i]);
		i++;
		return x;
	}
} 
