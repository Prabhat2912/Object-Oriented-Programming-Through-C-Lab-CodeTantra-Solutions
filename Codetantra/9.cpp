#include <iostream>
using namespace std;

// declare a class
class  Wall {
  private:
    //declare the variables
    float a,b;

  public:
    // default constructor to initialize variable
    Wall() {
    	cout<<"Enter the length: ";
    	cin>>a;
    	cout<<"Enter the breadth: ";
    	cin>>b;
    	cout<<"Area = "<<a*b<<endl;
    }
};

int main() {
  Wall wall1;
  return 0;
}