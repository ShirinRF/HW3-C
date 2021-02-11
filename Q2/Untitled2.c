#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	srand(time(0));
	int X,chance,boxford,barvard;
	scanf("%d",&X);
	chance=rand()%101;
	if (chance<=X){
		boxford=rand()%39;
		barvard=boxford+rand()%(40-boxford);
		printf("Barvard(%d) - Boxford(%d)\n",barvard,boxford);
	}
	else {
		barvard=rand()%39;
		boxford=barvard+rand()%(40-barvard);
		printf("Barvard(%d) - Boxford(%d)\n",barvard,boxford);
	}
	return 0;
}
