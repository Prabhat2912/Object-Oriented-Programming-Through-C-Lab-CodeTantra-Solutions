// Write your code here to complete the functional requirements
// of the problem
template<class T>
class Numeric{
private:
 T num1,num2;
public:
  Numeric(T n1,T n2){
  	num1=n1;
  	num2=n2;
  }
  T add(){
  	return num1+num2;
  }
  T subtract(){
  	return num1-num2;
  }
  T multiply(){
  	return num1*num2;
  }
  T division(){
  	return num1/num2;
  }
};