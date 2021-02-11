#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int main(){
	int n,m,a,x=0,y=0;
	scanf("%d%d%d",&n,&m,&a);
	x=n/a;
	if (n%a){
		x=x+1;
	}
	y=m/a;
	if (m%a){
		y=y+1;
	}
	printf("%d",x*y);
}
