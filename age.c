#include <stdio.h>
int main()
{
	int dd,mm,yyyy,a,b,c,D,M,p,age,x=230;
	int yr;
	printf("Enter Date of Birth (Example dd) :\n");
	scanf("%d",&dd);
	printf("Enter your Month of Birth (Ex:mm) :\n");
	scanf("%d",&mm);
	printf("Enter your Year of Birth (Ex:yyyy) :\n");
	scanf("%d",&yyyy);
	a=2015-yyyy;
	b=a/4;
	c=a*365+b;
	if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
	{
		D=31-dd;
	}
	else if(mm==4||mm==6||mm==9||mm==11)
	{
		D=30-dd;
	}
	else 
	{
		D=28-dd + b;
	}
	M=12-mm;
	p=M*30+(M/2);
	age=c+D+p+x;
	yr=age/365;
	printf("You survived %d days or %d yrs (approx.) on Earth!!!!", age,yr);

	return 0;
	
	

}



