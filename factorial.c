#include <stdio.h>
#include <conio.h>
int main()
{
	int i,num,f=1;
	printf("Enter The Number Of Which You Want Factorial :");
	scanf("%d",&num);
	if(num >= 0){
	for(i=num;i>=1;i--)
	{
		f=num*f;
		num=num-1;
	}
	printf("The Factorial Of The Given Number Is :");
	printf("%d",f);}
	else{
		printf("invalid operation");
	}
	return 0;
	
}
