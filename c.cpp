// calculater in c++ program
#include<iostream>
using namespace std;
int main(){
	char symbol;
	double num1,num2, result;
	
	cout<<"Enter Your symbol(+,-,*,/,%)";
	cin>>symbol;
	
	cout<<"Enter Your first num1:";
	cin>>num1;
	
	cout<"Enter Your Second num2:";
	cin>>num2;
	
	switch(symbol){
		case '+':
			result = num1+num2;
		break;
		case '-':
			result = num1-num2;
		break;
		case '*':
		    result = num1*num2;
		break;
		case '/':
			result = num1/num2;
		break;
	
	}
	cout<<endl<<result;
	
	return 0;
}