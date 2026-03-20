//升序选择

#include<stdio.h>

int main(){
	int a[10]={3,5,6,1,4,2,9,7,8,0};
	for(int i=0;i<9;i++){
		int Min_value=i;
		for(int j=i+1;j<10;j++){
		    if(a[j]<a[Min_value]){
				Min_value=j;
			}	
		}
		if(a[Min_value]!=a[i]){
			int temp=a[i];
			a[i]=a[Min_value];
			a[Min_value]=temp;
		}
	}
	for(int i=0;i<10;i++){
			printf("%d",a[i]);
	}
    return 0;
}
