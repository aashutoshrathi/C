//Checking of PRIME Number
#include <stdio.h>
int main()
{
	int a,b,c=2;
	printf("Check for Prime Number :\n");
	scanf("%d",&a);
	
for(int i=2;i<a;i++)	    
 {
     b=a%i;
   if(b==0)
{

printf("not prime\n");

break;	}
	
}

if(b!=0)
{printf("prime\n");

}
return 0; 
}

