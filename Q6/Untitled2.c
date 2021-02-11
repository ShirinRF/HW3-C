#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a1,a2,b1,b2,c1,c2,d1,d2,m,n,p,q,Area;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&b1);
	scanf("%d",&b2);
	scanf("%d",&c1);
	scanf("%d",&c2);
	scanf("%d",&d1);
	scanf("%d",&d2);
	m=a1;
	n=b1;
	p=a2;
	q=b2;
	if (a1<c1){
		m=c1;
	}
	if (b1>d1){
		n=d1;
	}
	if (a2<c2){
		p=c2;	
	}
	if (b2>d2){
		q=d2;
	}
	Area=(m-n)*(p-q);
	printf("%d",Area);
}
