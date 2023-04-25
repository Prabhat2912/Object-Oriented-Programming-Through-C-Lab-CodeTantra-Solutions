#include<iostream>
using namespace std;
class complex {
	public: 
	double real, imag;
	complex operator - (complex c){
		return{real-c.real, imag-c.imag};
	
    } 
};
int main(){
	complex c1,c2,c3;
	cout<<"Enter real and imaginary parts : ";
	cin>>c1.real>>c1.imag;
	cout<<"Enter real and imaginary parts : ";
	cin>>c2.real>>c2.imag;
	c3=c1-c2;
	cout<<"Subtraction of two complex numbers : "<<c3.real<<" + i"<<c3.imag<<endl;
	return 0;
}