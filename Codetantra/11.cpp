#include<iostream>
using namespace std;
class wall
{
   private:
     //declare variables...
     int length;
     int breadth;
     
   public:
     wall (int l,int b) //parameterized constructor to initialize l and b
     {
         length = l;
         breadth = b;
      }
      int area() //function to find area
      {
      return length*breadth;
      }
      void display() //function to display the area
      {
         cout<<"Area = "<<area()<<endl;
      }
};

int main()
{
	int l,b;
	cout<<"Enter length: ";
	cin>>l;
	cout<<"Enter breadth: ";
	cin>>b;
    wall c(l,b);  //initializing the data members of object 'c' implicitly
	//call area function
	c.area();
	
	//call display function
    c.display();
    return 0;
 }   //end of program