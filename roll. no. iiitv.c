#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("\tEnter your IIITV Roll Number :\n");
	//For eg. 201651001
	scanf("%d", &a);
	
	b=a%1000;
	c=(a%100000-b)/1000;
	d=(a-c*1000-b)/100000;
	
	if(c==52)
	{printf("\tYou are From UG Batch %d\n",d);
	printf("\tYou are Information Technology Batch\n");
	printf("\tYour Batch Roll. No. is %d",b);}
	
	else if(c==51)
	{printf("\tYou are From UG Batch %d\n",d);
	printf("\tYou are from Computer Science Batch\n");
	 printf("\tYour Batch Roll. No. is %d",b);}
	
	else {
	printf("\tPlease Enter Valid Roll. No.\n");}
	
	
	return 0;
	
	
}
