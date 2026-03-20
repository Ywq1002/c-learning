#include<stdio.h>
#include<ctype.h>
#include<string.h>

void countch(char *str,int *uppers,int *lowers,int *digits,int *spaces,int *others){
	int len=strlen(str);//这个是隐式转换 太多字符可能失效 //str返回 size_t（无符号整数）类型 一可以size_t len1 = strlen(str1);  // 使用 size_t 二可以 int len1 = (int)strlen(str1);  // 强制转换
	for(int i=0;i<len;i++){
		char ch=str[i];
		if(isupper(ch)){
			(*uppers)++;
		}else if(islower(ch)){
		(*lowers)++;
		}else if(isdigit(ch)){
		(*digits)++;
		}else if(isspace(ch)){
		(*spaces)++;
		}else{(*others)++;} 
	}

	}
	int main(){
		char a[100]={0};
		int uppers=0,lowers=0,digits=0,spaces=0,others=0;
		gets(a);
		countch(a,&uppers,&lowers,&digits,&spaces,&others);
		printf("%d %d %d %d %d",uppers,lowers,digits,spaces,others);
		return 0;
	}

