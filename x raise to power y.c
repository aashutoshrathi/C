#include <stdio.h>
int main()
{
	float a,b,c,p=1;
	puts("Enter Base of Number:");
	scanf("%f",&a);
	puts("Enter Power of Number:");
	scanf("%f",&b);
	c=0;
	while (c<b)
	{
		p *=a;
		c++;	
	}
	
	printf("The Value of a^b is %f",p);
	return 0;
}
