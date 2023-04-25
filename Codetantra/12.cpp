#include <iostream>
#include <cstring>
using namespace std;
class STUDENT{
	char Sname[30];
	int Marks[6];
	int Total=0;
	int TMax;
	public:
	void Assign(){
		cout<<"Enter Student Name: ";
		cin.getline(Sname,30);
		for(int i=0;i<6;i++){
			cout<<"Enter marks of subject "<<i+1<<": ";
			cin>>Marks[i];
		}
		cout<<"Enter maximum total marks: ";
		cin>>TMax;
	}
   void Compute(){
		for(int i=0;i<6;i++){
			Total=Total+Marks[i];
		}
	}
    void Display(){
    	cout<<"Student Name: "<<Sname<<endl;
    	cout<<"Marks are"<<endl;
    	for(int i=0;i<6;i++){
    		cout<<"Subject "<<i+1<<" : "<<Marks[i]<<endl;
    	}
    	cout<<"Total: "<<Total<<endl;
    	cout<<"Percentage: "<<(float)Total/6<<endl;
    }
};
int main(){
	STUDENT s1;
	s1.Assign();
	s1.Compute();
	s1.Display();
	return 0;
}