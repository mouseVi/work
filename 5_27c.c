// Задание 5.27с (нахождение простых целых числе с ограничением делителя на корень из делимого)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void s(long int);

int main()
{
	long int i;
	for (i = 2147000000; i < pow(2, 8 * sizeof(long int)) /2 - 1; i++)
		if (i % 2 != 0 || i == 2)
			s(i);
	return 0;
}
void s(long int i)
{
	int x, n, c = 0;
	static int s = 0;
	n = sqrt(i);
	
	for (x = 2; x <= n; x++)
		if (i % x == 0)
			x = n, c++;
	if (c == 0) {
		printf("%10ld", i);
		if(s % 10 == 9) {
			printf("\n");
			s++;
		}
	}
}