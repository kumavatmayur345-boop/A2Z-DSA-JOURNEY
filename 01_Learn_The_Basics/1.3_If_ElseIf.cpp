#include <iostream>
using namespace std;

int main() {
    int age; 
    cin>>age; //to take input of age 
    if(age>18 && age<60){ //check for condtion if condition is true then print or output.
        cout<<"Eligible for Driving License";
    } else if (age<18){
        cout<<"Not Eligible, Age must greater than 18";
    } else {
        cout<<"Not Eligible, Age must be less than 60";
    }
}
