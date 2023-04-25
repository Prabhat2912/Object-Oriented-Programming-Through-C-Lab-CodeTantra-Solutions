#include <iostream>
using namespace std;
int main(){
	int n;
	int arr[10];
	
	cout << "Enter n : ";
	cin >> n;
	cout << "Enter " <<n <<" Values : ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int largest = arr[0], smallest =arr[0];
	for(int i=1; i<n; i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
		if (arr[i]<smallest){
			smallest= arr[i];
		}
	}
	
	cout<<"Largest element = "<<largest<<endl;
	cout<<"Smallest element = "<<smallest<<endl;
	return 0;
}