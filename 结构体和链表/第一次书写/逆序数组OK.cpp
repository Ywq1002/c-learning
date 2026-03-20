#include<stdio.h>
int main(){
	int a[100];
	int n;
	printf("输入你想输入多少数:");
	scanf("%d",&n);
	if(n>100||n<2){
		printf("no");
		return -1;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n/2;i++){
		int temp;
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
