#include <iostream>
#include <string.h>
using namespace std;
class student {
int rn;
string name;


public:
	student(int rn,string name){
		this->rn=rn;
		this->name=name;
	};
	student(const student& other ) // copy constructor
	{
		this->rn=other.rn;
		this->name=other.name;
	}
	void display();
};

void student::display()
{
cout<<rn<<"  "<<name<<endl;
}
int main()
{
	int rno;
	string name;
	cout<<"Enter roll number: ";
	cin>>rno;
	cout<<"Enter student name: ";
	cin>>name;
	student s1(rno,name);
	student s2=s1;
	s1.display();
	s2.display();
	
	
	return 0;
}
