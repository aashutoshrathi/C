#include <stdio.h>
int main(void)
{
	int c=1;
	while (c<=10)
	{
		puts(c%2 ? "***" : "++++++++");
		++c;
	}
	return 0;
}
