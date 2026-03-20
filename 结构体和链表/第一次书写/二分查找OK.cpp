#include<stdio.h>

int Delete(){
	int low=0,high=5;
	int a[6]={1,2,3,4,5,6};
	int n;
	scanf("%d",&n);
	while(low<=high){
	    int mid=(low+high)/2;
		if(a[mid]==n){
			return mid;
		}else if(a[mid]>n){
			high=mid-1;
		}else low=mid+1;
	}
	return -1;
}
