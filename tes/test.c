#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	double c;
	printf("제곱근을 알고 싶은 양수 입력\n:");
	scanf("%d", &a);
	c = sqrt(a);
	printf("소수점 범위 입력(0~6)\n:");
	scanf("%d", &b);
	printf("%.4Lf", c);
	printf("----------------------------\n");
	if (b = 0)
	{
		printf("%.0Lf", c);
	}

	else if (b = 1)
	{
		printf("%.1Lf", c);
	}

	else if (b = 2)
	{
		printf("%.2Lf", c);
	}

	else if (b = 3)
	{
		printf("%.3Lf", c);
	}

	else if (b = 4)
	{
		printf("%.4Lf", c);
	}

	else if (b = 5)
	{
		printf("%.5Lf", c);
	}

	else if (b = 6)
	{
		printf("%.6Lf", c);
	}
}