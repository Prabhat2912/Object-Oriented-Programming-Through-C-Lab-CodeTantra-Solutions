#include <iostream>
using namespace std;
void strc(char* target, const char* source){
	while(*source){
		*target=*source;
		target++;
		source++;
	}
	*target='\0';
}
int main (){
	char source[100],target[100];
	cout<<"enter a string: ";
	cin.getline(source,100);
	strc(target,source);
	cout<<"target string: "<<target<<endl;
	return 0;
}