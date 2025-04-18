#include <iostream>

using namespace std;


int main() {	
	
	long long iban = 1234567890123456;
	long long revIban = 0;
	char newIban[16];
	int rem = 0;
	
	
	while(iban>0){
		revIban= revIban*10 + iban%10;
		iban/=10;
	}

	for(int i=0 ; i<19 ; i++){
		if (i==4 || i==9 || i==14){
			newIban[i] = ' ';
		} else {
			rem = revIban%10;
			revIban/=10;
			newIban[i] = rem + '0';
		}
		
		cout<<newIban[i];
	}
	
	
	
	return 0;
}

