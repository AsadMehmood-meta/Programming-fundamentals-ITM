#include <iostream>

using namespace std;

void inputmarks(int** , int , int);
void updatemarks(int**);
void displayArray(int** , int , int);

int main() {	
	int students, subjects;
	cout << "Enter number of students: ";
	cin >> students;
	cout << "Enter number of subjects: ";
	cin >> subjects;

	int** array = new int* [students];
	
	for (int i = 0; i < students; ++i) {
		array[i] = new int[subjects];
	}
	
	inputmarks(array , students , subjects);
	updatemarks(array);
	displayArray(array , students , subjects);
	
	return 0;
}

void inputmarks(int** array , int students , int subjects){
	for (int i=0 ; i<students ; i++){
		for (int j=0 ; j<subjects ; j++){
			cout<<"Enter marks of "<<j+1<<" subject for "<<i+1<<" student: ";
			cin>>array[i][j];
		}
	}
}

void updatemarks(int** array){
	array[0][1]=9;
}

void displayArray(int** array , int students , int subjects){
	for (int i=0 ; i<students ; i++){
		for (int j=0 ; j<subjects ; j++){
			cout<<array[i][j]<<"\t";
		}
	cout<<endl;
	}
}


