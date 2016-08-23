#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,lc;
	printf("Enter a year to check First day of:\n");
	scanf("%d",&a);
	b=a-1900;
	lc=b/4;
	c=b+lc;
	d=c%7;
	
	if(d==0)
	printf("1 January %d is Monday",a);
	
	if(d==1)
	printf("1 January %d is Tuesday",a);
	
	if(d==2)
	printf("1 January %d is Wednesday",a);
	
	if(d==3)
	printf("1 January %d is Thursday",a);
	
	if(d==4)
	printf("1 January %d is Friday",a);
	
	if(d==5)
	printf("1 January %d is Saturday",a);
    
    if(d==6)
	printf("1 January %d is Sunday",a);

    return 0;
}


