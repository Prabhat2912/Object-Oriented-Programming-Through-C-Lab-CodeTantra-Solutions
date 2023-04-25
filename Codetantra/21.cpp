#include <iostream>
using namespace std;
int main(){
	int n,d,r;
	cout<<"Enter numerator value : ";
	cin>>n;
	cout<<"Enter denominator value : ";
	cin>>d;
	try {
		if (d==0){
			throw "divide by zero occurred";
		}
		r=n/d;
		cout<<"Result : "<<r<<endl;
	}
	catch(const char* msg){
		cout <<"Exception caught : "<<msg<<endl;
	}
	return 0;
}