#include <stdio.h>
#include <string.h>		

int main()

{
	int t,n,m;
	scanf("%d",&t);
	
	while(t--)
	{	
		int score=0;
		long int x,y,a[n],i;
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		
		while(m--)
		{
			int b,l,r;
			scanf("%d",&b);
			if(b==1)
			{
				int x;
				scanf("%d %d %d",&l,&r,&x);
				for(i=l-1;i<=r-1;i++)
				{
					a[i]=a[i]*x;
				}
			}
			
			else if(b==2)
			{
				int y;
				scanf("%d %d %d",&l,&r,&y);
				for(i=l-1;i<=r-1;i++)
				{
					a[i]=(i+2-l)*y;
				}
			}
			
			else if(b==3)
			{	
				int temp=1,zero=0;
				scanf("%d %d",&l,&r);
				for(i=l-1;i<=r-1;i++)
				{
					temp=temp*a[i];
				}
				
				while(temp!=0 && temp%10==0)
				{
					score++;
					temp/=10;
				}
					
			}
			
		}
		printf("%d",score);
	}
	return 0;
}


ORRRRRR in CPP

/*****

#include<iostream>
using namespace std;
int main()
    {
    int t;
    cin>>t;
   
    while(t--)
    {
     
         int m,n,l,r;
         long long int q,xory,ans=0,i,type,j,product=1;
     		cin>>n>>m;
     
         long long int a[n];
        for(i=0;i<n;i++)
               cin>>a[i];
               
        for(j=1;j<=m;j++)
        {
            int digit=0;
            cin>>type;
            
            switch(type)
                {
                    case 1:
                      		cin>>l>>r>>xory;
                     
                           for(i=l-1;i<=r-1;i++)
                                a[i]=a[i]*xory;
                            break;
                    case 2:
                    		cin>>l>>r>>xory;
                          
				for(i = l-1; i < r; ++i) 
                                    a[i]=((i+1)-l+1)*xory;
                            break;
                    case 3:
                            digit=0;
                            cin>>l>>r;
                            
                            product=1;
                            for(i=l;i<=r;i++)
                                    product*=a[i-1];
                            while(product!=0 && product%10==0)
                            {
                                ans++;
                                product/=10;
                            }
                }
        }
        cout<<ans<<"\n";
     }
    return 0;
    }
    
*****/
