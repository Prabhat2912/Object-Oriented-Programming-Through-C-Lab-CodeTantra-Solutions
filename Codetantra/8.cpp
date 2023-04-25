#include <iostream>
using namespace std;
int main(){
	int a,b;
	char n;
	cout<<"Enter two integer values : ";
	cin>>a>>b;
	cout<<"Enter an arithmetic operator : ";
	cin>>n;
	switch (n){
	  case '+':
		 cout<<a<<" + "<<b<<" = "<<a+b<<"\n";
		 break;
	  case '-':
		 cout<<a<<" - "<<b<<" = "<<a-b<<"\n";
		 break;
	  case '*':
		 cout<<a<<" * "<<b<<" = "<<a*b<<"\n";
		 break;
	  case '/':
		 cout<<a<<" / "<<b<<" = "<<a/b<<"\n";
		 break;
	  case '%': 
	   cout<<a<<" % "<<b<<" = "<<a%b<<"\n";
	    break;
	 default:
	   cout<<"Error! Operator is not correct"<<endl; 
	}
	return 0;
}