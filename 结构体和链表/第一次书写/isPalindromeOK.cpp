#include<stdio.h>
#include<string.h>

int isPalindrome(char *str){
	int len=0,i,j;
	len=strlen(str);
	for(i=0,j=len-1;i<j;i++,j--){
		if(str[i]!=str[j]){
			return 0;
			
		}
	}
    return 1;
}

int main(){
	char a[100];
	gets(a);
	int result=isPalindrome(a);
	printf("%d",result);
	return 0;
}
