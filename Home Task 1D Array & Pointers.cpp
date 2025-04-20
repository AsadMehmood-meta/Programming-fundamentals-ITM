#include <iostream>

using namespace std;

//function for input marks of each student
void inputMarks(int* , int , int);

//function for display marks of students
void display(int* , int , int);

int main() {	
	 int students, subjects;
	cout << "Enter number of students: "; 
	cin >> students;
	cout << "Enter number of subjects: "; //input number of rows by user
	cin >> subjects;
	
	 int* array = new int [subjects]; //initialize 1D array dynamically
	 
	 inputMarks(array , students , subjects);
	 display(array , students , subjects);
	
	return 0;
}

//function for input marks of each student
void inputMarks(int* array , int students , int subjects){
	cout<<"Enter Marks:"<<endl;
	for (int i=0 ; i<students ; i++){
		cout<<"Student "<<i+1<<": "<<endl;
		for (int j=0 ; j<subjects ; j++){
			cout<<" Subject "<<j+1<<": ";
			cin>>array[j];
		}
	}
}

//function for display marks of students
void display(int* array , int students , int subjects){
	cout<<"Student Marks:"<<endl;
	for (int i=0 ; i<students ; i++){
		cout<<"Student "<<i+1<<": ";
		for (int j=0 ; j<subjects ; j++){
			cout<<array[j]<<" ";
		}
	cout<<endl;
	}
}

