#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592
int main(){
	int zele1,zele2;
	float theta,maxtheta,equal;
	scanf("%d %d %f %f",&zele1,&zele2,&theta,&maxtheta);
	equal=sqrt(pow(zele1,2)+pow(zele2,2)-2*zele1*zele2*cos(theta));
	if (theta>maxtheta){
		printf("Theta is bigger than theta max!");
	}
	else {
		printf("%.2f",equal);
	}
}
