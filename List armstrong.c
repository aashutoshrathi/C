#include<stdio.h>
#include<conio.h>
int main()
{
	int b,r=0;
	long a=0,c,t;
	printf("\nEnter the number till which you want list of Armstrong No.\n");
	scanf("%ld",&a);
	printf("Armstrong number from 1 to %ld are:\n",a);
	for(c ==1;c <= a;c++)
	{   
		t=c;
		while(t!=0)
			{
				b=t%10;
				r=r+b*b*b;
				t=t/10;
			}	
			
			
			if(c == r)
				printf("%ld\n",c);
			r=0;
	}

	getch();
	return 0;
}
