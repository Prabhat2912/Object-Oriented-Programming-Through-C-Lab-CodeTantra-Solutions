#include <iostream>
using namespace std;
class Rectangle;
class square{
int side;
 public:
  square(int s):side(s){}
  friend class Rectangle;
};
class Rectangle{
	int l,w;
	public:
	 Rectangle(square s){
	 	l=s.side;
	 	w=s.side;
	 }
  void area(){
  	int a=l*w;
  	cout<<"Area of rectangle: "<<a<<endl;
  }	 
};
int main(){
	int n;
	cin>>n;
	square s1(n);
	Rectangle r1(s1);
	r1.area();
	return 0;
}