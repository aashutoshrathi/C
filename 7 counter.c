//Program to Count number of 7's in a Number
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,v=0,w=0,x=0,y=0,z=0,sum;
	printf("Enter The number (5 digit or less) to check no. of 7: \n");
	scanf("%d",&a);
	b=a%10;
	c=(a/10)%10;
	d=(a/100)%10;
	e=(a/1000)%10;
	f=(a/10000)%10;
	
	if(b==7)
	{
		v=1;
	}
	if(c==7)
	{
		w=1;
	}
	if(d==7)
	{
		x=1;
	}
	if(e==7)
	{
		y=1;
	}
	if(f==7)
	{
		z=1;
	}
	sum=v+w+x+y+z;
	printf("Number of 7's in your number is %d",sum);
	return 0;
}
