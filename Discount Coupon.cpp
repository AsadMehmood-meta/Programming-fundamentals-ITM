#include <iostream>
#include <string>


using namespace std;


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

void checkDiscount(float sum){
	if (askDiscountCoupon()){
		validateCoupon();
		cout<<"\nYou availed 200 rupees discount.\nYour total amount to pay: "<<sum<<"\nDiscounted amount: "<<sum-200<<endl;
	} else{
		cout<<"\nYour total amount to pay: "<<sum;
	}	
}


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


void itemsCount(){
	int items;
	cout<<"How many items you want to buy: ";
	items = validateNegative();
	sumTotal(items);
}


int main(){
	
	itemsCount();
	
}
