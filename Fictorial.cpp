#include <iostream>

using namespace std;

void fictorial();
void calculateFictorial(int);

int main(){
	fictorial();
}

void fictorial(){
	int num;
	cout<<"Enter valude for calculate ficctorial: ";
	cin>>num;
	calculateFictorial(num);	
}

void calculateFictorial(int num){
	int sum=1;
	for (int i=num; i>0 ; i--){
		sum*=i;
		
		if (i>1)
		cout<<i<<" x ";
		else cout<<i<<" = ";
	}
	cout<<sum<<endl;
}
