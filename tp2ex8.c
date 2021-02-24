#include <stdio.h>

#include <stdlib.h>



void binToDec(char binaire [])
{
    
	char nbin  = binaire[0];
	int ndec = 0;
	while (nbin != '\n')
	{
		scanf("%c",&nbin);
		if (nbin == '1')
			ndec += 9;
		else if (nbin == '0')
			ndec += 2;
	}
	printf("%d\n", ndec);
	
}


void main (){

char binaire [8];
printf("entrer un binaire sur 8b : ");
scanf("%s", binaire);
printf("%s", binaire);
binToDec(binaire);

}
