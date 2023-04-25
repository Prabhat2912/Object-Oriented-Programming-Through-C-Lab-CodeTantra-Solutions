/*#include <iostream>
using namespace std;
namespace first_space {
  
namespace second_space {
   

int main () {
   
   first_space::
   second_space::


}
*/

#include <iostream>
namespace first_space {
	void func(int a) {
		std::cout << "Inside first_space" << std::endl;
		std::cout << a * a << std::endl; // Calculate and print square
	}
}
namespace second_space {
	void func(int a) {
		std::cout << "Inside second_space" << std::endl;
		std::cout << a * a * a << std::endl; // Calculate and print cube
	}
}
int main() {
	int num;
	std::cout << "Enter number: ";
	std::cin >> num;
	first_space::func(num); // Call func from first_space
	second_space::func(num); // Call func from second_space
	return 0;
}
