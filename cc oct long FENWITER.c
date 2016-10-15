#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,c1=0,c2=0,c3=0,i,score=0,r1=0,r2=0,r3=0;
		char l1[1000],l2[1000],l3[1000];
		scanf("%s %s %s",l1,l2,l3);	
		scanf("%lld",&n);
		
		// Counting 1's in strings
		
		for(i=0;i<strlen(l1);i++)
		{
			if(l1[i] =='1')
			c1++;
			
		}
		
		printf("%lld",i);

		/** for(i=0;i<strlen(l2);i++)
		{
			if(l2[i] =='1')
			c2++;
			
		}
		
		for(i=0;i<strlen(l3);i++)
		{
			if(l3[i] =='1')
			c3++;
		}
	
		// End of Counting ....
		
		
		if(c1==strlen(l1) && c2==strlen(l2) && c3==strlen(l3))
		{
			score = 1;
		}
		
		else if(c2==strlen(l2) && c3==strlen(l3))
		{ i=0;
			while(l1[strlen(l1)-i-1]== '1')
			{	
				r1++;
				i++;
			}
			score = c1+1-r1;
		}
		
		else if(c3==strlen(l3))
		{	i=0;
			while(l2[strlen(l2)-i-1]=='1')
			{	
				r2++;
				i++;
			}			
			score = c1+c2*n+1-r2;
		}
		
		else 
		{	i=0;
			while(l3[strlen(l3)-i-1]=='1')
			{	
				r3++;
				i++;
			}
			score = c1+c2*n+c3+1-r3;
		}
		
		printf("%lld\n",score); *///
	}
	return 0;	
}
