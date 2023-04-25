
#include <iostream>
#include <cmath>

using namespace std;

int power(int num, int pwr = 2) {
	    return pow(num, pwr);
}

double power(double num, int pwr = 2) {
	    return pow(num, pwr);
}

int main() {
	    int intNum, intPwr;
	     double doubleNum;
	     cout << "Enter any integer value : ";
	     cin >> intNum;
	     cout << "Enter any double value : ";
	     cin >> doubleNum;
	     cout << "Enter the power value : ";
	     cin >> intPwr;  
	     cout << "The square of " << intNum << " : " << power(intNum) << endl;
	     cout << "The cube of " << intNum << " : " << power(intNum, 3) << endl;
	     cout << "The " << intNum << " to the power of " << intPwr << " : " << power(intNum, intPwr)<<endl;    
	     cout << "The square of " << doubleNum << " : " << power(doubleNum)<<endl;
	     cout << "The cube of " << doubleNum << " : " << power(doubleNum, 3)<<endl;
	     cout << "The " << doubleNum << " to the power of " << intPwr << " : " << power(doubleNum, intPwr)<<endl;
return 0;
}