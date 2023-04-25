//Start writing required code to complete the functionality here
#include<iostream>
#include<cstring>
using namespace std;
class Student{
private:
 char* name;
 int id;
public:
  Student(const char* _name,int id):id(id){
name= new char[strlen(_name)+1];
strcpy(name,_name);
}
~Student(){
	delete[] name;
}
void display(){
	cout<<"The student name : "<<name<<endl;
	cout<<"The student id : "<<id<<endl;
}
void* operator new (size_t size){
	void* ptr=::operator new(size);
	
	return ptr;
}
void operator delete(void* ptr){
	::operator delete(ptr);
}
};