#include <stdio.h>

int main()

{

int n;
scanf("%d",&n);

  long long int x[n],y[n],i,j,k,score,max=0;
  
  for(i=0;i<n;i++)

 {
	scanf("%lld %lld",&x[i],&y[i]);
 } 
 

	for (i=0; i<n ; i++)
    {	
       for(j=0; j<i ; j++)
       {
         score = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
    
          if(max<score)
	
	      max=score;
  
	   }
	
	printf("%lld\n",max);

    }
return 0; 
}

