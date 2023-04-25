#include<iostream>
using namespace std;
int main() {
	try {
		int a, b;
		cout << "Enter two integer values: ";
		cin >> a >> b;
      if(b==0){
      	throw 0;
      }
      else{
      	cout<<a/b<<endl;
      }
		/*catch(...) {
			throw; //rethrowing the exception
		}
	}
	catch(int) {
		cout << "Second value cannot be zero"<< endl;
	}
	return 0;
}*/
}
catch (int){
	cout<<"Second value cannot be zero"<<endl;
}
catch(...){
	throw;
}
return 0;
}
