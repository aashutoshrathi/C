#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{	
		int i,n,m,j,c,count=0;
		scanf("%d %d %d",&n,&m,&c);				
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(i*j==c)
				{
					count++;
				}
			}
		}
		
		printf("%d\n",count);
	}
	return 0;
}
