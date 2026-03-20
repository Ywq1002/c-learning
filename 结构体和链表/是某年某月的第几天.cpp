#include<stdio.h>
struct stu_day{
	int year;
	int month;
	int day;
};
int main(){
	struct stu_day day1;
	int sum=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&day1.year,&day1.month,&day1.day);
	for(int i=0;i<day1.month-1;i++){
	sum+=a[i];	
	}
	sum+=day1.day;
	if((day1.month>2)&&((day1.year%4==0&&day1.year%100!=0)||day1.year%400==0))
		sum+=1;
		printf("是%d年的第%d天",day1.year,sum);
	return 0;
}
