#include <stdio.h>
int main()
{
	unsigned int a=1,t=0,y;
	while (a<=10)
		{
		y=a*a;
		printf("%d\n",y);
		t +=y;
		++a;		
		}
		printf("Total is %d\n",t);
		return 0;
	
}
