#include<stdio.h>
#include<string.h>

void my_strcat(char *str1,char *str2){
	while(*str1!='\0'){
		str1++;
	}
	while(*str2!='\0'){
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1='\0';
}

int main(){
	char a[100]="1235";
	char b[100]="2358";
	my_strcat(a,b);
	puts(a);
	return 0;
}.
