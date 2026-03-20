#include<stdio.h>
#include<string.h>

void alltrim(char *str){
	int start=0;
	while(str[start]==' '||str[start]=='\t'){
	     start++;
	}
	if(!str[start]){
		return ;
	}
	int end;
	end=strlen(str)-1;
	while(end>=start&&(str[end]==' '||str[end]=='\t')){
		end--;
	}
	int len=end-start+1;
	for(int i=0;i<len;i++){
		str[i]=str[i+start];
	}
	str[len]='\0';
	return;
}

int main(){
	char a[100];
	gets(a);
	alltrim(a);
	puts(a);
	return 0;
}
