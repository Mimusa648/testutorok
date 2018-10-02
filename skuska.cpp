#include <stdio.h>

int main()
{
	int riadok,cislo,j;
	
	printf("Type a number: ");
	scanf("%d", &cislo);
	
	for(riadok=1; riadok<=cislo; riadok++)
	{
		for(j=0; j<=cislo; j++)
			printf(" ");
		for(j=1; j<=cislo*2-1; j--)
			printf("?");
	}
	printf("\n");
}
