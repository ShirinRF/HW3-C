#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i, j;
	double c, d;

	d = 11.0;

	c += d / 22;

	j = i = 10;

	j += (i++) + (--d);

	c /= i+++d;

	printf("%lf, %f, %d, %d\n", c, d, i, j);
}
