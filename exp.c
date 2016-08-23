//Decimal to Binary Converter
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
	int final;
	printf("<---Decimal to Binary Converter--->\n");
	printf("Enter the Integer Decimal Number to Convert\n");
	scanf("%d",&a);
	b=(a%2);
	c=((a/2)%2);
	d=((a/4)%2);
	e=((a/8)%2);
	f=((a/16)%2);
	g=((a/32)%2);
	h=((a/64)%2);
	i=((a/128)%2);
	j=((a/256)%2);
	k=((a/512)%2);
	l=((a/1024)%2);
	m=((a/2048)%2);
	n=((a/4096)%2);
	o=((a/8192)%2);


	printf("The Converted Number in Binary is : %d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",o,n,m,l,k,j,i,h,g,f,e,d,c,b );
	printf("Thank You !!");
	getch();
	return 0;
		

}
