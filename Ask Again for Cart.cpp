#include <iostream>



using namespace std;

float validateNegative();
float sum(); //to ask user how many item he want to buy
float askAgain(float);
void displaySum(float);


int main(){
	float sumTotal;
	sumTotal=sum();
	askAgain(sum());

	
	
}

//to validate inpuat that it cannot be less than zero
float validateNegative(){
	float validate;
	while(1){
			cin>>validate;
			if (validate>0){
				break;
			}else {
				cout<<"\nInvalid input. Try again\n";
			}
		}
	return validate;
}

//to ask price and quantity of every item and calculate the total amount
float sum(){
	int items;
	cout<<"How many items you want to buy: ";
	items = validateNegative();
	
	float itemPrice,itemQuantity,sum;
	
	for (int i=1 ; i <=items ; i++){
	
		cout<<"\nPrice of "<<i<<" item: ";
		itemPrice = validateNegative();
		
		cout<<"\nQuantity of "<<i<<" item: ";
		itemQuantity = validateNegative();

		sum+=itemPrice*itemQuantity;		
	}
	return sum;
}

float askAgain(float sumTotal){
	char n;
	cout<<"Do you want to add more items (y or N) : ";
	cin>>n;
	if (n=='Y'||n=='y'){
		sumTotal();
	} else {
		displaySum(sumTotal);
	}
}

void displaySum(float sumTotal){
	cout<<"Total Amount : "<<sumTotal<<endl;
}

