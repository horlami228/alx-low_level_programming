#include <stdio.h>

int main(void)
{
	char pp;
	
	for ( pp = 'a'; pp <= 'z'; pp++)
	{

	if ( pp == 'q' || pp == 'e')
	{
		continue;
	}	
	
		putchar(pp);
	}
		putchar(10);
		
		return (0);
}
