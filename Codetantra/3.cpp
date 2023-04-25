#include <iostream>
using namespace std;
#include "OverloadNewDelete2a.cpp"
int main() {
	Student *s;
	s = new Student("Saraswathi", 555);
	s -> display();
	delete s;
	return 0;
}