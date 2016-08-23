#include<stdio.h>
#include<conio.h>
int main()
{
	int a,t,b,r=0;
	printf("Add number to check for Armstrong number:\n");
	scanf("%d",&a);
	t=a;
	while(t!=0)
	{
	b=t%10;
	t=t/10;
	r=r+b*b*b;
	
	
	}		
	if (r==a)
	printf("Amstrong Number");
	else 
	printf("Not Armstrong Number");
	return 0;
}
