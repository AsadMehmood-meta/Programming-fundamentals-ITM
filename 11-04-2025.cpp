#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//0) age validator function which shows whether the age is correct or not
//1) take age as input and show personType
//2) take name as input and show greetings
//3) take both as input and print these details in diff lines
//4) take age of 2 sublings as input and share whos elder 

bool ageValidator(int age) {
    if(age > 0) {
        return true;
    } else {
        return false
    }
}

void showPersonType(int age) {
    if(age>=0 && age <=2) {
        cout<<"Infant";
    } else if (age >2 && age<=17) {
        cout<<"Child";
    } else {
        cout<<"Adult";
    }
}

void greetings(string name) {
    cout<<"Hello "<<name;
}

void differentLinesPrint(int age, string name) {
    cout<<age<<endl;
    cout<<name<<endl;
}

void elderSibling(int a, int b) {
    if(a == b) {
        cout<<"Twins";
    } else if (a > b) {
        cout<<"A is elder";
    } else {
         cout<<"B is elder";
    }
}

int main() {
    int age, sibling1Age, sibling2Age;
    string name;
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your Age: ";
    cin>>age;
    cout<<"Enter Sibling 1 age: ";
    cin>>sibling1Age;
    cout<<"Enter Sibling 2 age: ";
    cin>>sibling2Age;
    
    bool isMyAgeValid = ageValidator(age);
    
    if(isMyAgeValid) {
        showPersonType(age);
        greetings(name);
        differentLinesPrint(age, name);
        elderSibling(sibling1Age, sibling2Age);
    } else {
        cout<<"Sorry We cant work on your age";
    }
}
