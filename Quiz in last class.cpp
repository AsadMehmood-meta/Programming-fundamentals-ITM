#include <iostream>

using namespace std;

int** createArray(int , int);
void inputValues(int** , int , int);
void printValues(int** , int , int);
void colsSum(int** , int , int ,int*);
void rowsSum(int** , int , int ,int*);
void printColSum(int* , int);
void printRowSum(int* , int);
int diagonal(int** , int);

int main(){
	int row;
	cout<<"Enter number of rows: ";
	cin>>row;
	int col;
	cout<<"Enter number of columns: ";
	cin>>col;
	
	int** heatGrid = createArray(row , col);
	int* rowsSumArray = new int [row];
	int* colsSumArray = new int [col];
	
	inputValues(heatGrid , row , col);
	printValues(heatGrid , row , col);
	colsSum(heatGrid,  row,  col , colsSumArray);
	rowsSum(heatGrid,  row,  col , rowsSumArray);
	printRowSum(rowsSumArray , col);
	cout<<endl<<"Ancient King's Path Signal Strength: "<<diagonal(heatGrid,row)<<" units"<<endl;
	printColSum(colsSumArray , row);
	
	
}

int** createArray(int row, int col){
	int** arr = new int* [row];
	for (int i=0 ; i<row ; i++){
		arr[i] = new int [3];
	}
	return arr;
}

void inputValues(int** arr, int row, int col){
	for (int i=0 ; i<row ; i++){
		for(int j=0 ; j<col ; j++){
			cout<<"Enter value for ("<<i+1<<" , "<<j+1<<") : ";
			cin>>arr[i][j];
		}
	}
	
}

void printValues(int** arr, int row, int col ){
	cout<<endl<<endl;
	for (int i=0 ; i<row ; i++){
		for(int j=0 ; j<col ; j++){
			cout<<"Heat signal at ("<<i+1<<" , "<<j+1<<") : "<<arr[i][j]<<endl;
			if(arr[i][j] > 100){
				cout<<"HAZARD ALERT: High volcanic activity at ("<<i+1<<" , "<<j+1<<")!"<<endl;
			}
		}
	}
	cout<<endl<<endl;
}


void colsSum(int** arr, int row, int col ,int* colsSumArray){
	for (int i=0 ; i<row ; i++){
		int colSum=0;
		for(int j=0 ; j<col ; j++){
			colSum+=arr[i][j];		
		}
		colsSumArray[i] = colSum;
	}	
}

void rowsSum(int** arr, int row, int col ,int* rowsSumArray){
	for (int i=0 ; i<row ; i++){
		int rowSum=0;
		for(int j=0 ; j<col ; j++){
			rowSum+=arr[j][i];
		}
		rowsSumArray[i] = rowSum;
	}	
}

void printColSum(int* arr, int row){
	cout<<endl<<endl;
	for(int i=0 ; i<row ; i++){
		cout<<"Total signal in Column "<<i+1<<" : "<<arr[i]<<endl;
	}
}

void printRowSum(int* arr, int col){
	cout<<"=== Treasure Map Heatmap Analysis ==="<<endl;
	for(int i=0 ; i<col ; i++){
		cout<<"Total signal in Row "<<i+1<<" : "<<arr[i]<<endl;
	}
}

int diagonal(int** arr, int row){
	int diagonalSum = 0;
	for (int i=0 ; i<row ; i++){
		diagonalSum+=arr[i][i];
	}
	return diagonalSum;
}

