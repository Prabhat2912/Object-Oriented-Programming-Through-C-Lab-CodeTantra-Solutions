#include <iostream>
using namespace std;
#include "MultipleInheritance2a.cpp"
class Result : public Internals, public Externals {
	private:
		float s1, s2, s3, tot, avg;
	public:
		void displayTotAvg();
};
#include "MultipleInheritance2b.cpp"
int main() {
	Result r;
	r.readInternals();
	r.readExternals();
	r.displayTotAvg();
	return 0;
}