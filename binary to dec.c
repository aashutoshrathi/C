//Binary to Decimal Converter
#include <stdio.h>
#include<conio.h>
int main()
{
	int bin,dec,a,b,c,d,e,f,g,h,i,j,k,l;
	int 
	printf("Binary ==> Decimal Converter\n");
	printf("Note :- Please Enter number containing only '1' and '0' and use ur common sense\n");
	printf("Enter a binary number (Max. 11 digits)\n");
	scanf("%d", &bin);
	
	a= bin%10;
	
	if(a==0||a==1)
    {
	b= (bin%100-a)/10;
	}
	else 
	printf("Invalid Input!!");
	
	if(b==0||b==1)
    {
	c= (bin%1000-b)/100;
	}
	else 
	printf("Invalid Input!!");
	
	if(c==0||c==1)
    {
	d= (bin%10000-c)/1000;
	}
	else 
	printf("Invalid Input!!");
	
	if(d==0||d==1)
    {
	e= (bin%100000-d)/10000;
	}
	else 
	printf("Invalid Input!!");
	
	if(e==0||e==1)
    {
	f= (bin%1000000-e)/100000;
	}
	else 
	printf("Invalid Input!!");
	
	if(f==0||f==1)
    {
	g= (bin%10000000-f)/100000;
	}
	else 
	printf("Invalid Input!!");
	
	if(g==0||g==1)
    {
	h= (bin%100000000-g)/100000;
	}
	else 
	printf("Invalid Input!!");
	
	if(h==0||h==1)
    {
	i= (bin%1000000000-h)/1000000;
	}
	else 
	printf("Invalid Input!!");
	
	if(i==0||i==1)
    {
	j= (bin%1000000000-i)/1000000;
	}
	else 
	printf("Invalid Input!!");
	
	if(j==0||j==1)
    {
	k= (bin%1000000000-j)/1000000;
	}
	else 
	printf("Invalid Input!!");
	
	if(k==0||k==1)
    {
	l= (bin%1000000000-k)/1000000;
	}
	else 
	printf("Invalid Input!!");
	
	dec= a*1+b*2+c*4+d*8+e*16+f*32+g*64+h*128+i*256+j*512+k*1024+l*2048;
	
	printf("The Decimal number is %d",dec);
	getch();
	
}
