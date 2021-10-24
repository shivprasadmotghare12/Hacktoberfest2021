#include<iostream>
using namespace std;

int main() {
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++) {
		cin>>arr[i];
	}
	cout<<"array: ";
	for (int i = 0; i < size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int ele, index;
	int flag = 0;
	cout<<"Enter the element you want to search: ";
	cin>>ele;
	for (int j = 0; j < size; j++) {
		if (ele == arr[j]) {
			index = j;
			cout<<"found at pos "<<index;
			flag++;
		}
	}
	cout<<endl;
	cout<<"frequency of element is "<<flag;
	if (flag == 0) {
		cout<<"not found";
	}
	return 0;
}
