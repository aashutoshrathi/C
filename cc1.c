//Code to get minimum number of notes for a given amount----
#include <stdio.h>
#include <conio.h> 
int main()
{
	int N,a,b,c,d,e,f,g,h,i,j,sum;
	printf("INPUT TOTAL NO OF TEST CASES\n");
	scanf("%d",&N);
	printf("Enter amount :\n");
	int counter=0;
	while (counter<N)
	{
		scanf("%d",&a);
		
    	b=a/1000;
    	c=(a%1000)/500;
    	d=((a%1000)%500)/100;
    	e=(((a%1000)%500)%100)/50;
    	f=((((a%1000)%500)%100)%50)/20;
    	g=(((((a%1000)%500)%100)%50)%20)/10;
    	h=((((((a%1000)%500)%100)%50)%20)%10)/5;
    	i=(((((((a%1000)%500)%100)%50)%20)%10)%5)/2;
    	j=((((((((a%1000)%500)%100)%50)%20)%10)%5)%2);
    	
    	sum=b+c+d+e+f+g+h+i+j;
    	
    	printf("Minimum no. of notes are %d\n",sum);
    	counter++;
    }
	
	
	
	return 0;
	
}
