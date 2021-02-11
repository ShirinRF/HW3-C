#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i, j; double d; float f;
	
	i = d = j = f = 10;

	i = d * j + 1.0;

	j = (int) i % (int)((double)f * j);

	printf("%d, %d\n %lf", i, j,d*j);
}
