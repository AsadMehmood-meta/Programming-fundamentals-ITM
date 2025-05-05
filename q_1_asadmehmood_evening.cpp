#include <iostream>

using namespace std;

void inputValues(float** , int , int);
float inputBatteryLevel(int , int);
void printValues(float** , int , int);
void findMaxBatteryLevelRobot(float** , int , int);

int main(){
	int rows = 3;
	int cols = 3;	
	float** robots = new float*[rows];
	for(int i=0 ; i<rows ; i++){
		robots[i] = new float[cols];
	}
	inputValues(robots , rows , cols);
	
	printValues(robots , rows , cols);
	
	findMaxBatteryLevelRobot(robots , rows , cols);
	
	
	
	return 0;
}


void inputValues(float** robots, int rows, int cols){
	cout<<"Kindly enter battery level of each robot."<<endl;
	
	float batteryLevel=0;
	
	for(int i=0; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			robots[i][j] = inputBatteryLevel(i , j);
		}
	}
}

float inputBatteryLevel(int i , int j){
	while(true){
		float batteryLevel = 0;
		
		cout<<"Enter battery level of robot at ("<<i<<","<<j<<"): ";
		cin>>batteryLevel;
		
		if (batteryLevel<0 || batteryLevel>100){
			cout<<"Invalid battery level. Try again."<<endl;
		} else {
			return batteryLevel;
		}
	}
}

void printValues(float** robots, int rows, int cols){
	cout<<endl<<endl<<"Battery Level of robots."<<endl<<endl;
	
	float batteryLevel=0;
	
	for(int i=0; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			cout<<"Battery level of robot at position ("<<i<<" , "<<j<<"): "<<robots[i][j]<<endl; 
		}
	}
	
	cout<<endl<<endl;
}

void findMaxBatteryLevelRobot(float** robots, int rows, int cols){
	int maxRow = 0;
	int maxCol = 0;
	
	for (int i=0 ; i<rows ; i++){
		for(int j=0 ; j<cols ; j++){
			if(robots[i][j] > robots[maxRow][maxCol]){
				maxRow = i;
				maxCol = j;
			}
		}
	}
	
	cout<<"Robot at position ("<<maxRow<<" , "<<maxCol<<") has the highest battery level: "<<robots[maxRow][maxCol]<<"%"<<endl;
}
