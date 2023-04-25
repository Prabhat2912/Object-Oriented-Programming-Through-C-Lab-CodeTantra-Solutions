#include <iostream>
using namespace std;
#include "Add.h"

int main() {
	int a, b;
	float c, d;
	char p, q;
	cout << "Enter two integer values : ";
	cin >> a >> b;
	cout << "Enter two float values : ";
	cin >> c >> d;
	cout << "Enter two char values : ";
	cin >> p >> q;
	cout << "Sum of two integers : " << add(a, b) << endl;
	cout << "Sum of two floats : " << add(c, d) << endl;
	cout << "Sum of two characters : " << add(p, q) << endl;
}