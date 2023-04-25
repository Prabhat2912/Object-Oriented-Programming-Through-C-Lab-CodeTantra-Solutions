// Uneditable driver code
#include <iostream>
using namespace std;
class Student {
	private:
		int id;
		char name[30];
	public:
		void readData();
		void displayData();
};
class Marks : public Student {
	private:
		float m1, m2, m3, total, avg;
	public:
		void readMarks();
		void displayTotAvgMarks();
};
#include "SingleInheritance2a.cpp"