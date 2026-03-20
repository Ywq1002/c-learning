#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int age;
	float score[2];
};
int main(){
	struct student stu1;
	strcpy(stu1.name,"liling");
	stu1.age=22;
	stu1.score[0]=stu1.score[1]=90;
	printf("%s %d %.1f %.1f",stu1.name,stu1.age,stu1.score[0],stu1.score[1]);
	return 0;
}
