// Uneditable driver code
#include <iostream>
using namespace std;
#include "MemFunTemplates2a.cpp"
int main() {
	int num1, num2;
	float val1, val2;
	cout << "Enter 2 integer values : ";
	cin >> num1 >> num2;
	cout << "Enter 2 float values : ";
	cin >> val1 >> val2;
	Numeric<int> ob1(num1, num2);
	Numeric<float> ob2(val1, val2);
	cout << "Addition of 2 ints : " << ob1.add() << endl;
	cout << "Subtraction of 2 ints : " << ob1.subtract() << endl;
	cout << "Multiplication of 2 ints : " << ob1.multiply() << endl;
	cout << "Division of 2 ints : " << ob1.division() << endl;
	cout << "Addition of 2 floats : " << ob2.add() << endl;
	cout << "Subtraction of 2 floats : " << ob2.subtract() << endl;
	cout << "Multiplication of 2 floats : " << ob2.multiply() << endl;
	cout << "Division of 2 floats : " << ob2.division() << endl;
	return 0;
}