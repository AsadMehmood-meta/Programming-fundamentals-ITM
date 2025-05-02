#include <iostream>
#include <string>

using namespace std;


int main(){
	int a;
	cout<<"Enter 3 digit value: ";
	cin>>a;
	int arr[3];
	
	string firstNumber[10] = {"" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"};
	string middleNumber[10] = {"" , "" , "twenty" , "thirty" , "fourty" , "fifty" , "sixty" , "seventy" , "eighty" , "ninty"};
	string elevenSeries[10] = {"" , "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" , "sixteen" , "seventeen" , "eighteen" , "ninteen"};
	 
	
	for (int i=2 ; i>=0 ; i--){
		arr[i] = a%10;
		a/=10;
	}
	
	for (int i=0 ; i<3 ; i++){	
		cout<<firstNumber[arr[i]]<<" ";
	}
	
	
	
	
	return 0;	
}
