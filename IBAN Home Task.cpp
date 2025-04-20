#include <iostream>
#include <string>

using namespace std;

//fuction to add spaces after every 4 digits.
string addSpaces (string );

int main(){
	string iban = "PK36SCBL0000001123456702";
	cout<<addSpaces(iban); 
	
	return 0;
}

string addSpaces (string iban){
	for (int i=0 ; i<29 ; i++){
		if (i==4 || i==9 || i==14 || i==19 || i==24){
			iban.insert(i," ");
		}
	}
	return iban;
}
