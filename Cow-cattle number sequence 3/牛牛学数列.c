#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include<stdio.h>
int main()
{
	int y = 0, n = 0;
	scanf("%d", &n);
	double q = 1, w = 0, r =0, e = 0,x=0;
	for (y = 1; y <= n; y++)
	{
		q = 1;
		w = e;
		r = pow(-1, y - 1);
		r *= (2 * y - 1);
		e = w + r;
		w = e;
		q /= e;
		x += q;
	}
	printf("%.3lf\n", x);
	return 0;
}