#include<iostream>
using namespace std;

int fibonacci(int n)
{
	if(n<=1){
		return n;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
int main()
{
	int n;
	
	cout<<"enter a number:";
	cin>>n;
	
	cout<<"the "<<n<<"fibonacci number is:"<<fibonacci(n)<<endl;
return 0;
}
