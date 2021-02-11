#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int month,floor1,floor2;
	float base,hoghogh,padash,bime;
	scanf("%d%f",&month,&base);
	floor1=floor(month/12);
	floor2=floor(month/6);
	padash=((floor1)*base)*2;
	bime=((floor2)*base)*0.2;
	hoghogh=(month*base*94/100)-bime+padash;
	printf("%.2f",hoghogh);
}
