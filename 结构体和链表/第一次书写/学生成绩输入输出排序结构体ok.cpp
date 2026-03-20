#include<stdio.h>

struct student{
	int Num;
	char Name[20];
	float score;
};
 
int main(){
	struct student stu[100],sTutemp;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %s %f",&stu[i].Num,stu[i].Name,&stu[i].score);//TODO
	}
	for(int i=0;i<n-1;i++){
		//TODO
		for(int j=0;j<n-1-i;j++){
		    if(stu[j+1].score<stu[j].score){
				sTutemp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=sTutemp;
			}
         
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %s %f",stu[i].Num,stu[i].Name,stu[i].score);
	}
	return 0;
}
