#include <iostream>

using namespace std;

void inputDestination(int* , float* , int , int);
int inputStartingStation();
int inputDestinationStation();
int calculateFare(int , int);
float depositBalance(int customersID , float customersBalance , float fare);
float validateDeposit();

int main(){
	
	cout<<"*****Welcome to Green Bus Service*****\n\n";
	
	 int customers = 10;
	 int customersBalance = 10;
	 int* customersID = new int[customers]{101,201,301,401,501,601,701,801,901,1101};
	 float* customersBalanceArray = new float[customersBalance]{10.0,10.0,10.0,10.0,10.0,10.0,10.0,10.0,10.0,10.0};
	 
	 inputDestination(customersID , customersBalanceArray , customers , customersBalance);

	return 0;
}

void inputDestination(int* customersID, float* customersBalanceArray, int customers, int customersBalance){
	
	for (int i=0 ; i<customers ; i++){
		
		cout<<"\n\nHello! Customer ID: "<<customersID[i]<<endl<<endl;
		
		int startingStation = inputStartingStation();
		int destinationStation = inputDestinationStation();
		
		float fare = calculateFare(startingStation , destinationStation);
		
		while (fare>customersBalanceArray[i]){
			customersBalanceArray[i]+= depositBalance(customersID[i] , customersBalanceArray[i] , fare);
		}
		
		cout<<"\n\n\Your fare: "<<fare<<"\nYour balance in card: "<<customersBalanceArray[i]<<endl;
		customersBalanceArray[i]-=fare;
		cout<<"Your remaining balace in card : "<<customersBalanceArray[i]<<endl<<endl;

	}
}



int inputStartingStation(){
	while(true){
		int startingStation = 0;
		
		cout<<"Enter starting station (0-10): ";
		cin>>startingStation;
		
		if (startingStation<1 || startingStation>10){
			cout<<"Invalid station. Try again."<<endl;
		} else {
			return startingStation;
		}
	}
}

int inputDestinationStation(){
	while(true){
		int destinationStation = 0;
		
		cout<<"Enter destination station (0-10): ";
		cin>>destinationStation;
		
		if (destinationStation<1 || destinationStation>10){
			cout<<"Invalid station. Try again."<<endl;
		} else {
			return destinationStation;
		}
	}
}

int calculateFare(int startingStation , int destinationStation){
	int stations = (destinationStation-startingStation);
	if (stations<0) stations*=-1;
	if (stations<3){
		return stations*10;
	} else {
		return  ((stations-2)*2)+20;
	}
	
}

float depositBalance(int customersID , float customersBalance , float fare){
	cout<<"\n\nYour fare: "<<fare<<"\nYour balance in card: "<<customersBalance<<"\nYou have insufficient balance.\n";

	float creditAmount=0;

	cout<<"\nEnter amount to credit in your card: ";
		creditAmount=validateDeposit();
		return creditAmount;
	}	


float validateDeposit(){
	float deposit = 0;

	while (true){
	cin>>deposit;
	if(deposit<0){
		cout<<"Invalid amount. Enter again.\n";	
	} else{
		return deposit;
	}
}
}



