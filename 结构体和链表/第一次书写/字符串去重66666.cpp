#include<stdio.h>
#include<string.h>

char *Remove(char *str){
	char appearen[256]={0};
	static char result[256]={0};
	int len=strlen(str);
	for(int i=0;i<len;i++){
		unsigned 	char ch=(unsigned char) str [i];
		appearen[ch]=1;
	}
	int k=0;
	for(int i=0;i<256;i++){
		if(appearen[i]){
			result[k]=(char)i;
			k++;
		}
		
	}result[k]='\0';
	return result;
}
