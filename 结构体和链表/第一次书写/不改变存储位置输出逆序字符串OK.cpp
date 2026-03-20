#include<iostream>
using namespace std;
int main(){
	char a[10];
	gets(a);
	int length=0;
	int i=0;
	while(a[length]!='\0'){
		length++;}
		for(i=length-1;i>=0;i--){
		printf("%c",a[i]);
		}
	
	
	return 0;
}
