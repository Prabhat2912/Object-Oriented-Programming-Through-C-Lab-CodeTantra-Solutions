// Uneditable driver code
#include <iostream>
using namespace std;
#include "HierarchicalInheritance2a.cpp"
class Square : public Number {
	public:
		int getSquare();
};
class Cube : public Number {
	public:
		int getCube();
};
#include "HierarchicalInheritance2b.cpp"
int main() {
	Square s;
	s.readNumber();
	cout << "The square of " << s.getNumber() << " is : " << s.getSquare() << endl;
	Cube c;
	c.readNumber();
	cout << "The cube of " << c.getNumber() << " is : " << c.getCube() << endl;
	return 0;
}