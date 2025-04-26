#include <iostream>
using namespace std;

void inputValues(int* , int );
void printArray(int* , int );
void oddPrint(int* , int );
void evenPrint(int* , int );
void printTable(int* , int );

int main() {

	int size = 0;
	cout<<"Enter the size of array: ";
	cin>>size;
	
	int* myArray = new int[size];
	
	inputValues(myArray, size);
	printArray(myArray, size);
	
	return 0;
}

void printArray(int* arr, int size) {
	evenPrint(arr, size);
	cout<<endl<<endl;
	oddPrint(arr, size);
	cout<<endl<<endl;
	printTable(arr, size);
}

void inputValues(int* arr, int size) {
	for(int i = 0; i < size; i++) {
		cout<<"Enter "<<i+1<<" value: ";
		cin>>arr[i];
	}
	cout<<endl;
}

void oddPrint(int* arr, int size) {
	cout<<"Odd values of array: ";
	for(int i = 0; i < size; i++) {
		if (arr[i]%2){
			cout << arr[i] << " ";			
		}	
	}
}

void evenPrint(int* arr, int size) {
	cout<<"Even values of array: ";
	for(int i = 0; i < size; i++) {
		if (!(arr[i]%2)){
			cout << arr[i] << " ";			
		}	
	}
}

void printTable(int* arr, int size) {
	int j=1;
	for(int i = 0; i < size;) {
		if(j<=10){
			cout<<arr[i]<<" x "<<j<<" = "<<arr[i]*j<<endl;
			j++;
		} else{
			cout<<endl;
			j=1;
			i++;
		}	
	}

}

