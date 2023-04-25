#include <iostream>
using namespace std;
class Fibonacci{
private:
int num_terms;
int t1,t2;

public:
 Fibonacci(int n){
 	num_terms=n;
 	t1=0;
 	t2=1;
 }
 void gs(){
 	int next_term;
 	cout<<t1<<" "<<t2<<" ";
 	for(int i=2;i<num_terms;i++){
 		next_term=t1+t2;
 		cout<<next_term<<" ";
 		t1=t2;
 		t2=next_term;
 	}
 }
};
int main(){
	int n;
	cout<<"No.of terms: ";
	cin>>n;
	Fibonacci fib(n);
	fib.gs();
	return 0;
}