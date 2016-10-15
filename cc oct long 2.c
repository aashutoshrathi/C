#include <stdio.h>
int main()
{
	int t;
	double s,v,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf",&s,&v);
		x=(2*s)/(3*v);
		printf("%lf\n",x);
	}
	return 0;
}
