#include <iostream>
#include <string>
#include <regex>

using namespace std;

float validateNegative(); //to validate input that it cannot be less than zero
bool askDiscountCoupon(); //to check that user have a discounted coupon or not
bool validateCoupon(); //to validate coupon code is right or wrong
void checkDiscount(float sum); //to subtract discount from total amount and display it
void sumTotal(int items); //to ask price and quantity of every item and calculate the total amount
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
//uncomment this line if you use online compiler(use regex for validation)
//	string userCouponCode;

//comment this line if you wanna use regex for validation
	int couponCode = 12345, userCouponCode;
	
	while (1){
		cout<<"\nPlease enter your coupon code: ";
		cin>>userCouponCode;
		
//uncomment this line if you use online compiler(use regex for validation)
//			if (regex_match(userCouponCode,regex("itm-batch-[0-9]{3}"))){ 

//comment this line if you wanna use regex for validation
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
void sumTotal(int items){
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
