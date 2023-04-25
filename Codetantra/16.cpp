#include <iostream>
using namespace std;
#include "exchange.h"
int main() {
	Sample s;
	Test t;
	s.getData();
	t.getData();
	cout << "Before swap the values are : ";
	display(s, t);
	swap(s, t);
	cout << "After swap the values are : ";
	display(s, t);
}