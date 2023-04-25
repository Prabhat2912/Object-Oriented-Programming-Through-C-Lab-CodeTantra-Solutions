#include <iostream>
using namespace std;

class ONE {
private:
int var1;
protected:
	int var2;

public:
	ONE(int x,int y):var1(x),var2(y){
		
	}
	friend class TWO;
};

class TWO {
public: 
 void display(ONE obj){
 	cout<<"The value of Private Variable = "<<obj.var1<<endl;
 	cout<<"The value of Protected Variable = "<<obj.var2<<endl;
 }

};
// Driver code
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	ONE obj1(n1,n2);
	TWO obj2;
	obj2.display(obj1);
	return 0;
}
