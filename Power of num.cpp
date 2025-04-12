#include <iostream>
#include <cmath>

using namespace std;

void askNumForSquare();
void square(int);
void askNumForCube();
void cube(int num);
void askNumForNPower();
void nPower(int,int);


int main(){
	askNumForSquare();
	askNumForCube();
	askNumForNPower();
}

void askNumForSquare(){
	int numSq;
	cout<<"Enter value for squaring: ";
	cin>>numSq;
	square(numSq);
}

void square(int num){
	int sum=0;
	sum=pow(num,2);
	cout<<"Square of "<<num<<" : "<<sum<<endl;
}

void askNumForCube(){
	int numSq;
	cout<<"Enter value for squaring : ";
	cin>>numSq;
	square(numSq);
}

void cube(int num){
	int sum=0;
	sum=pow(num,3);
	cout<<"Cube of "<<num<<" : "<<sum<<endl;
}

void askNumForNPower(){
	int base,power;
	cout<<"Enter base value : ";
	cin>>base;
	cout<<"Enter power value : ";
	cin>>power;
	nPower(base,power);
}

void nPower(int base, int power){
	int sum=0;
	sum=pow(base,power);
	cout<<power<<" power of "<<base<<" : "<<sum<<endl;
}
