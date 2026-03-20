/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int result,sum=0;
if(n<1){
return 1;
}	
for(int i=1;i<=n;i++){result=1;
for(int j=1;j<=i;j++){
result*=j;//TODO
}
cout<<result<<endl;
sum+=result;
}

return 0;
}*/
#include<iostream>
using namespace std;
int factorial(int n){
	if(n<1){
	return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int n;
	scanf("%d\n",&n);

	int sum=0;
	for(int i=1;i<=n;i++){
		int result=factorial(i);
		sum+=result;
	}
	printf("%d",sum);
	return 0;
}

