#include <stdio.h>
int main()
{
	float a,b,c,d,e,f;
	float area,narea;
	printf("Enter 6 coordinates\n");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	area=(a*d-a*f-b*c+b*e+c*f-d*e)/2;
	narea=-area;
	if(area>=0)
	printf("Area of Triangle is %0.2f sq. units\n",area);
	else if(area<0)
	printf("Area of Triangle is %0.2f sq. units\n",narea);
	return 0;
}
