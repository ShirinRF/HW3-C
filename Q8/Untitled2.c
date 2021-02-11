#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int hour1,minutes1,seconds1,hour2,minutes2,seconds2;
	int hour,minutes,seconds;
	scanf("%d:%d:%d",&hour1,&minutes1,&seconds1);
	scanf("%d:%d:%d",&hour2,&minutes2,&seconds2);
	if (hour1>=hour2){
		hour=hour1-hour2;
		if (minutes1<minutes2){
			minutes=60-minutes2+minutes1;
			hour=hour-1;
			if (hour==-1){
				hour=23;
			}
		}
		else if (minutes1>=minutes2){
			minutes=minutes1-minutes2;
		}
		if (seconds1<seconds2){
			seconds=60-seconds2+seconds1;
			minutes=minutes-1;
				if (minutes==-1){
				minutes=59;
			}
		}
		else if (seconds1>=seconds2){
			seconds=seconds1-seconds2;
		}
	}
		if (hour1<hour2){
		hour=24-hour2+hour1;
		if (minutes1<minutes2){
			minutes=60-minutes2+minutes1;
			hour=hour-1;
			if (hour==-1){
				hour=23;
			}
		}
		else if (minutes1>=minutes2){
			minutes=minutes1-minutes2;
		}
		if (seconds1<seconds2){
			seconds=60-seconds2+seconds1;
			minutes=minutes-1;
			if (minutes==-1){
				minutes=59;
			}
		}
		else if (seconds1>=seconds2){
			seconds=seconds1-seconds2;
		}
	}
		if(hour1==0&&hour2==0&&hour==0){
			hour=23;
		}
		if (hour1>hour2){
			if (minutes1==minutes2&&seconds2>seconds1){
				hour=hour1-hour2-1;
			}
		}
		if (hour1<hour2){
			if (minutes1==minutes2&&seconds2>seconds1){
				hour=24-hour2+hour1-1;
			}
		}
		if (seconds<10&&minutes<10&&hour<10){
		printf("0%d:0%d:0%d",hour,minutes,seconds);
		}
		if (seconds>=10&&minutes<10&&hour<10){
		printf("0%d:0%d:%d",hour,minutes,seconds);
		}
		if (seconds<10&&minutes>=10&&hour<10){
		printf("0%d:%d:0%d",hour,minutes,seconds);
		}
		if (seconds<10&&minutes<10&&hour>=10){
		printf("%d:0%d:0%d",hour,minutes,seconds);
		}
		if (seconds<10&&minutes>=10&&hour>=10){
		printf("%d:%d:0%d",hour,minutes,seconds);
		}
		if (seconds>=10&&minutes<10&&hour>=10){
		printf("%d:0%d:%d",hour,minutes,seconds);
		}
		if (seconds>=10&&minutes>=10&&hour<10){
		printf("0%d:%d:%d",hour,minutes,seconds);
		}
		if (seconds>=10&&minutes>=10&&hour>=10){
		printf("%d:%d:%d",hour,minutes,seconds);
		}
		}
