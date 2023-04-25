// Write your code here for Number class
class Number{
	protected:
	  int x;
	public:
	  void readNumber(){
	  	cout<<"Enter an integer number : ";
	  	cin>>x;
	  }
	  int getNumber(){
	  	return x;
	  }
};
