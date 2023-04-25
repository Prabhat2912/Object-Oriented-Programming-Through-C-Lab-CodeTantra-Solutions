#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& a){
	int n=a.size();
	for (int i=0; i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter the number of data element to be sorted : ";
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>a[i];
	}
	bubbleSort(a);
	cout<<"Sorted Data ";
	for(int i=0;i<n-1;i++ ){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1];
	return 0;
}