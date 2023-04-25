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
class Test : public Student {
	protected:
		float m1, m2, m3;
	public:
		void readMarks();
};
class Result : public Test {
	private:
		float tot, avg;
	public:
		void displayTotAvgGrades();
};
#include "MultilevelInheritance2a.cpp"
int main() {
	Result r;
	r.readData();
	r.readMarks();
	r.displayData();
	r.displayTotAvgGrades();
	return 0;
}