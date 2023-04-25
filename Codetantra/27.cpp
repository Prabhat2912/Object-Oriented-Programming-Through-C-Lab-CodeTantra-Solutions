// Uneditable driver code
#include <iostream>
using namespace std;
#include "CtWithMultiArgs2a.cpp"
int main() {
	MySequence <int, 5> myInts;
	MySequence <float, 4> myFloats;
	myInts.setMember(0, 10);
	myInts.setMember(1, 20);
	myInts.setMember(2, 30);
	myInts.setMember(3, 40);
	myInts.setMember(4, 50);
	cout << "Values in myInts : ";
	myInts.showElements(5);
	myFloats.setMember(0, 1.5);
	myFloats.setMember(1, 2.5);
	myFloats.setMember(2, 3.5);
	cout << "Values in myFloats : ";
	myFloats.showElements(3);
	cout << "Value at position - 1 of myInts : " << myInts.getMember(1) << endl;
	cout << "Value at position - 4 of myInts : " << myInts.getMember(4) << endl;
	cout << "Value at position - 0 of myFloats : " << myFloats.getMember(0) << endl;
	cout << "Value at position - 2 of myFloats : " << myFloats.getMember(2) << endl;
	return 0;
}