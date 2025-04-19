#include <iostream>

using namespace std;

void takeValues(int [] , int);
void printarray(int [] , int);

int main() {	
	 int size;
	 cout<<"Enter size of array: ";
	 cin>>size;
	 int arr[size];
	 
//	 int* array1D = new int [size];
	 
	 takeValues(arr , size);
	
	
	return 0;
}

void takeValues(int arr[] , int size){
	for (int i=0 ; i<size ; i++){
		int element =0;
		cout<<"Enter "<<i+1<<" value. out of "<<size<<": ";
		cin>>element;
		arr[i]=element;
	}
	printarray(arr , size);
}

void printarray(int arr[] , int size){
	for(int i=0 ; i<size ; i++){
	cout<<arr[i]<<"\t";		
	}
}

