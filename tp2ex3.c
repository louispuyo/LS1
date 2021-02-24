
#include <stdio.h>
int main(void)
{
	char nbin;
	int ndec = 0;
	while (nbin != '\n')
	{
		scanf("%c",&nbin);
		if (nbin == '1')
			ndec = ndec * 2 + 1;
		else if (nbin == '0')
			ndec *= 2;
	}
	printf("%d\n", ndec);
	return 0;
}