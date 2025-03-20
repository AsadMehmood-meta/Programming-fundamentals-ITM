#include <iostream>
#include<cmath>

using namespace std;

//void larger (int a, int b, int c){
//	
//	if (a>b&&a>c){
//		cout<<a<<" is the largest number"<<endl;
//	}	else if (b>c){
//		cout<<b<<" is the largest number"<<endl;
//	} else {
//		cout<<c<<" is the largest number"<<endl;
//	}
//
//}

//float discount (float total ){
//	float f = total*0.8;
//	return f;
//}


//int primenumber (int num){
//	if (num<=1){
//		cout<<"Invalid Number"<<endl;
//	} else if (num==2 || num==3){
//		cout<<num<<" is a prime number."<<endl;
//	} else {
//		if (num%2==0){
//			cout<<num<<" is not a prime number."<<endl;
//		} else {
//			for (int i=3 ; i<num/2 ; i++){
//		   int a = num % i;
//		   if (a == 0){
//		   	cout<<num<<" is not a prime number."<<endl;
//		   	break;
//		   } else{
//		   	cout<<num<<" is a prime number."<<endl;
//		   	
//		   }
//		   
//		}
//		
//		}	
//	}
//}


	int armstrong(int num){
		float mod=0, rem=0, res=0;
		int num1=num;
		int i=0, rev=0;
		while (num1!=0){
		mod= num1%10;
		num1/=10;
		i++;			
		}
		
		num1=num;	
		while (num1!=0){
		rem = num1%10;
		num1/=10;
		res = res+pow(rem,i);	
		}
				
		if (res==num){
			cout<<num<<" is armstrong number."<<endl;
		} else {
			cout<<num<<" is not armstrong number."<<endl;
		}
	}
	
	
	
	


int main (int avgc,char** avgi){
	
//	 int i,j,k;	
//	cout<<"Enter first number: ";
//	cin>>i;
//	cout<<"Enter second number: ";
//	cin>>j;
//	cout<<"Enter third number: ";
//	cin>>k;
//	larger(i,j,k);


//	float a,d;
//	cout<<"Enter amount: ";
//	cin>>a;
//	d = discount(a);
//	cout<<"Discounted amount is: "<<d<<endl;
	
	
//	int n;
//	cout<<"Enter value: ";
//	cin>>n;
//	primenumber(n);
	
	
	int n;
	cout<<"Enter number: ";
	cin>>n;
	armstrong(n);
	
	
	
	
	
	return 0;
}



