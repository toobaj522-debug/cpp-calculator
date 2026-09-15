#include<iostream>
using namespace std;
main()
{
	int a,b;
	char ch;
	
	cout<<"Enter first number: "<<endl;
	cin>>a;
	
	cout<<"Enter second number: "<<endl;
	cin>>b;
	
	cout<<"Enter symbol (+,-,*,/,%)"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case '+':
			cout<<a+b;
			break;
			
		case'-':
			cout<<a-b;
			break;
			
		case'*':
			cout<<a*b;
			break;
			
		case'/':
			cout<<a/b;
			break;
			
		case'%':
			cout<<a%b;
			break;
			
		default:
			cout<<"Your character is invalid."<<endl;
			
	}
	
	return 0;
}
