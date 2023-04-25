#include <iostream>
using namespace std;
class STUDENT{
	public:
	string name;
	int age;
	float grade;
	STUDENT(){}
	STUDENT(string x,int y, float z){
		name=x;
		age=y;
		grade=z;
	}
	void getData(){
		cin>>name>>age>>grade;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Grade: "<<grade<<endl;
	}
};
int main(){
	STUDENT *s1=new STUDENT;
	s1->getData();
	s1->display();
	return 0;
	
}