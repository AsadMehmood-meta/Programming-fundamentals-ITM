#include <iostream>

using namespace std;

//function for input marks of each student
void inputmarks(int** , int , int);

//function for display marks of students
void display(int** , int , int);

int main() {	
	int students, subjects;
	cout << "Enter number of students: "; //input number of rows by user
	cin >> students;
	cout << "Enter number of subjects: "; //input number of columns by user
	cin >> subjects;

	int** array = new int* [students]; //initiate 2D array dynamically
	
	for (int i = 0; i < students; ++i) { //loop for input number of culumns
		array[i] = new int[subjects];
	}
	
	inputmarks(array , students , subjects);
	display(array , students , subjects);
	
	return 0;
}

//function for input marks of each student
void inputmarks(int** array , int students , int subjects){
	cout<<"Enter Marks:"<<endl;
	for (int i=0 ; i<students ; i++){
		cout<<"Student "<<i+1<<": "<<endl;
		for (int j=0 ; j<subjects ; j++){
			cout<<" Subject "<<j+1<<": ";
			cin>>array[i][j];
		}
	}
}

//function for display marks of students
void display(int** array , int students , int subjects){
	cout<<"Student Marks:"<<endl;
	for (int i=0 ; i<students ; i++){
		cout<<"Student "<<i+1<<": ";
		for (int j=0 ; j<subjects ; j++){
			cout<<array[i][j]<<" ";
		}
	cout<<endl;
	}
}


