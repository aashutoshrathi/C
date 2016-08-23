#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,l;
	printf("Enter integer to start sum from:\n");
	scanf("%d",&a);
	printf("Enter number of terms \n");
	scanf("%d",&b);
	printf("Enter common difference:\n");
	scanf("%d",&c);
	l=a+(b-1)*c;
	d=(b/2)*(a+l);
	printf("Sum is %d\n",d);
	getch();
	return 0;
}
