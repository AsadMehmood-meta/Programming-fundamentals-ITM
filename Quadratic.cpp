#include <iostream>
#include <cmath>

using namespace std;

float findDeterminate(int , int , int);
float postiveQuadratic(int , int , float);
float negativeQuadratic(int , int , float);

int main(){
	int a = 0 , b = 0 , c = 0;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"Enter value of c: ";
	cin>>c;
	
	float D = findDeterminate(a,b,c);
	
	
	float x1 = postiveQuadratic(a,b,D);
	float x2 = negativeQuadratic(a,b,D);
	
	cout<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
	
	return 0;	
}

float findDeterminate(int a, int b, int c){
	float D = sqrt((b*b)-(4*a*c));
	return D;
}

float postiveQuadratic(int a, int b, float D){
	float x = (-b+D)/(2*a);
	return x;
}

float negativeQuadratic(int a, int b, float D){
	float x = (-b-D)/(2*a);
	return x;
}
