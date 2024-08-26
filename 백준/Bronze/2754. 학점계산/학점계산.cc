#include <stdio.h>

int main(void)
{
	char str[3];
	double s = 4.0;
	scanf("%s", str);
	if (str[0] == 'F')
	{
		printf("0.0\n");
		return 0;
	}

	s -= str[0] - 'A';
	if (str[1] == '+')
		s += 0.3;
    else if (str[1] == '-')
		s -= 0.3;

	printf("%.1lf", s);
	return 0;
}