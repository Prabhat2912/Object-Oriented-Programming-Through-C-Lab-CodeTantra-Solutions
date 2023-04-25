#include <iostream>
using namespace std;
class Test;
class Sample{
private:
 int data;
public:
  void getData(){
  	cout<<"Enter first value : ";
  	cin>>data;
  }
  friend void swap(Sample& s, Test& t);
  friend void display(Sample& s, Test& t);
};
class Test{
private:
 int data;
 public:
 void getData(){
 	cout<<"Enter second value : ";
 	cin>>data;
 }
 friend void swap(Sample& s, Test& t);
 friend void display(Sample& s, Test& t);
};
void swap(Sample& s, Test& t){
	int temp=s.data;
	s.data=t.data;
	t.data=temp;
}
void display(Sample& s, Test& t){
	cout<<s.data<<" "<<t.data<<endl;
}