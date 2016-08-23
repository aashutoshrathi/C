#include <stdio.h>
#include<conio.h>
int main()
{
	int r,s,g;
	printf("Enter Age of Ram:\n" );
	scanf("%d",&r);
	
	printf("Enter Age of Shyam:\n" );
	scanf("%d",&s);
	
	printf("Enter Age of Ganshyam:\n" );
	scanf("%d",&g);
		
	if(r>s&&r>g)
	printf("Ram is eldest among three !!");
	else if(s>g)
	printf("Shyam is eldest among three !!");
	else
	printf("Ganshyam to naam se hi sabse bada lag raha h");
	getch();
	return 0;

}
