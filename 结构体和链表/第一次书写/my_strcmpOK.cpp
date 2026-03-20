#include<stdio.h>
#include<string.h>

int my_strcmp(char *str1,char *str2){
	int len1=strlen(str1);
	int len2=strlen(str2);
	for(int i=0;i<len1&&i<len2;i++){
		if(*(str1+i)!=*(str2+i)){
			return *(str1+i)-*(str2+i);
		}
	}

	return len1-len2;
}

int main(){
	char a[100]={0};
	char b[100]={0};
	gets(a);
	gets(b);
	int result=my_strcmp(a,b);
	printf("%d",result);
	return 0;
}
