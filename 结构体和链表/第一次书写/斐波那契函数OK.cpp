#include<iostream>
using namespace std;
int Fibonacci(int k){
	if(k==1||k==2){
		return 1;//TODO
	}
    return Fibonacci(k-1)+Fibonacci(k-2);//到最后会分裂成许多个Fibonnac(1)+Fibonacci(2)输出很多1相加
}
int main(){
	int n;
	cin>>n;
	if(n<1){
		return -1;
	}
	int result=Fibonacci(n);
	cout<<result<<endl;
	return 0;
}
