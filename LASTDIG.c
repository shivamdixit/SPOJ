#include <stdio.h>

int main()
{
	int tc;
	unsigned long long int power, result, value;

	scanf("%d", &tc);

	while(tc--)
	{
		result = 1;
		scanf("%llu", &value);
		scanf("%llu", &power);

		while(power>0)
		{
			if(power&1)
            		{result = result*value;
            	result = result%10;}
        		value = value*value;
        		value = value%10;
        	power /= 2;
		}

		printf("%llu\n", result);

	}
}
