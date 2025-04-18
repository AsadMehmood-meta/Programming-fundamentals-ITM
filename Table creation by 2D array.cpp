#include <iostream>

using namespace std;

int main() {	
	
	int valueI, valueJ;
	cout<<"How many table you want: ";
	cin>>valueI;
	cout<<"How much times each table multiply: ";
	cin>>valueJ;
	int tableArray[valueI][valueJ];
	
	for(int i=0 ; i<valueI ; i++){
		for(int j=0 ; j<valueJ ; j++){
			cout<<i+1<<" x "<<j+1<<" = ";
			tableArray[i][j]=(i+1)*(j+1);
			cout<<tableArray[i][j]<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}



