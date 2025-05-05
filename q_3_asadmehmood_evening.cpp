#include <iostream>

using namespace std;

void inputMilkYield(float** record , int milkSeasion , int cows , string []);
void printMilkYield(float** record , int milkSeasion , int cows , string []);


int main(){
	int cows = 5;
	int milkSeasion = 14;
	
	string cowsID[5] = {"101","102","103","104","105"};
	
	float** record = new float* [milkSeasion];
	for (int i=0 ; i<milkSeasion ; i++){
		record[i] = new float[cows];
	}
	
	inputMilkYield(record , milkSeasion , cows , cowsID);
	printMilkYield(record , milkSeasion , cows , cowsID);
	
	return 0;
}

void inputMilkYield(float** record , int milkSeasion , int cows , string cowsID[]){
	
	int day = 1;
	for (int i=0 ; i<milkSeasion ; i++){
		
		if (!(i%2)){
		cout<<"Day : "<<day<<endl;	
		day++;		
		}

		
		for(int j=0 ; j<cows ; j++){
			if (!(i%2)){
				cout<<"Morning Session: Enter milk yield of cow # "<<cowsID[j]<<" in litres: ";
				cin>>record[i][j];
			} else{
				cout<<"Evening Session: Enter milk yield of cow # "<<cowsID[j]<<" cow in litres: ";
				cin>>record[i][j];
			}	
		}
		cout<<endl;
	}
}

void printMilkYield(float** record , int milkSeasion , int cows , string cowsID[]){
	int day = 1;
	
	for (int i=0 ; i<milkSeasion ; i++){
		
	if (!(i%2)){
	cout<<"Day : "<<day<<endl;	
	day++;		
		}

		
	for(int j=0 ; j<cows ; j++){
		if (!(i%2)){
			cout<<"Morning Session: Milk yield of cow # "<<cowsID[j]<<" : "<<record[i][j]<<" litres."<<endl;
		} else{
			cout<<"Evening Session: Milk yield of cow # "<<cowsID[j]<<" cow : "<<record[i][j]<<" litres."<<endl;
			}	
	}
		cout<<endl;
	}
}
