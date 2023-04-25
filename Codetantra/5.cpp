#include <iostream>
using namespace std;
char* strct(char* str1, const char* str2){
	char* ptr=str1;
	while (*ptr){
		ptr++;
	}
	while(*str2){
		*ptr=*str2;
		ptr++;
		str2++;
	}
	*ptr='\0';
	return str1;
}
int main(){
	char str1[100],str2[100];
	cout<<"enter first string: ";
	cin.getline(str1,100);
	cout<<"enter second string: ";
	cin.getline(str2,100);
	char* result=strct(str1,str2);
	cout<<"The concatenated string is "<<result<<endl;
	return 0;
}