#include <iostream>
#include <string>

using namespace std;

float validateNegative(); //to validate input that it cannot be less than zero
bool askDiscountCoupon(); //to check that user have a discounted coupon or not
bool validateCoupon(); //to validate coupon code is right or wrong
void checkDiscount(float sum); //to subtract discount from total amount and display it
float sumTotal(int items); //to ask price and quantity of every item and calculate the total amount
void itemsCount(); //to ask user how many item he want to buy


int main(){
	
	itemsCount();
	
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

//to check that user have a discounted coupon or not
bool askDiscountCoupon(){
	char coupon;
	while (1){
		cout<<"\nDo you have a discount coupon? (Y/N): ";
		cin>>coupon;
			if (coupon=='Y' || coupon=='y'){
				return true;
				break;
			} else if (coupon=='N'|| coupon=='n'){
				return false;
				break;
			} else {
				cout<<"\nInvalid input\n";
			}		
	}
}

//to validate coupon code is right or wrong
bool validateCoupon(){
	int couponCode = 12345, userCouponCode;
	while (1){
		cout<<"\nPlease enter your coupon code: ";
		cin>>userCouponCode;
			if (userCouponCode==couponCode){
				return true;
				break;
			} else {
				cout<<"\nInvalid Coupon code. Try again.";
			}		
	}	
}

//to subtract discount from total amount and display it
void checkDiscount(float sum){
	if (askDiscountCoupon()){
		validateCoupon();
		cout<<"\nYou availed 200 rupees discount.\nYour total amount to pay: "<<sum<<"\nDiscounted amount: "<<sum-200<<endl;
	} else{
		cout<<"\nYour total amount to pay: "<<sum;
	}	
}

//to ask price and quantity of every item and calculate the total amount
float sumTotal(int items){
	float itemPrice,itemQuantity,sum=0;
	
	for (int i=1 ; i <=items ; i++){
	
		cout<<"\nPrice of "<<i<<" item: ";
		itemPrice = validateNegative();
		
		cout<<"\nQuantity of "<<i<<" item: ";
		itemQuantity = validateNegative();

		sum+=itemPrice*itemQuantity;		
	}
	
	checkDiscount(sum);
}

//to ask user how many item he want to buy
void itemsCount(){
	int items;
	cout<<"How many items you want to buy: ";
	items = validateNegative();
	sumTotal(items);
}
