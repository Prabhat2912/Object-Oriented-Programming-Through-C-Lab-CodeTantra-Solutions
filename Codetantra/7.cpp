#include<iostream>
using namespace std;
int strl(const char* str){
 const char* ptr =str;
	while (*ptr){
		ptr++;
	}
	return ptr-str;
}
int main() {
	char str[100];
	cout<<"enter the string: ";
	cin.getline(str,100);
	int len= strl(str);
	cout<<len<<endl;
	return 0;
}