/*#include <iostream>
using namespace std;

namespace example_namespace {
	class ExampleClass{
	public:
	  static int cube(int x){
	  	return x*x*x;
	  }
	};
}	


fvbvhjfhjhvfk







int main()


	example_namespace::ExampleClass example;
	static int n,r;
    cin>>n;
	r=example.cube(n);
    cout<<"Value: "<<r<<endl;
	return 0;
	}*/
	
	#include <iostream>
	namespace calculation {
		class CubeCalculator {
			public:
			static void calculate(int num) {
				int cube = num * num * num; // Calculate cube
				std::cout << "Value: " << cube << std::endl; // Print cube value
			}
		};
	}
	
	int main() {
		int num;
		std::cin >> num;
		calculation::CubeCalculator::calculate(num); // Call calculate function from calculation namespace
		return 0;
	}
	