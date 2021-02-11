#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	scanf("%d%d",&x3,&y3);
	if (pow((x2-x1),2)+pow((y2-y1),2)+pow((x2-x3),2)+pow((y2-y3),2)==pow((x3-x1),2)+pow((y3-y1),2)){
		x4=(x1+x3)-x2;
		y4=(y1+y3)-y2;
		printf("%d %d",x4,y4);
	}
	else {
		printf("Not Possible");
	}
	return 0;
}
