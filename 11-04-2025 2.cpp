#include <iostream>
#include <string>

using namespace std;

void percentage(){

	float sum=0,subjectCount,marks,subjectMarks,totalMarks=0,perc;
	
	cout<<"Enter total subjects: ";
	cin>>subjectCount;

	
	for (int i=1 ; i <= subjectCount ; i++){
		
		cout<<"Enter "<<i<<" subject marks: ";
		cin>>marks;
		
		if (marks<0 || marks>100){
			cout<<"Invalid marks\nNote: must between 0-100\n";
			i--;
		} else{
			cout<<"Subject "<<i<<" total marks: ";
			cin>>subjectMarks;
		
			totalMarks+=subjectMarks;
			sum+=marks;
		}
		
	}
	
	perc=(sum*100)/totalMarks;
	cout<<"Your percentage is : "<<perc<<"%";
}

//void calculateDays(){
//	int age,days;
//	cout<<"Enter your age: ";
//	cin>>age;
//	days=age*365;
//	cout<<days;
//}

int main(){
	
	percentage();
	
//	calculateDays();
	
}
