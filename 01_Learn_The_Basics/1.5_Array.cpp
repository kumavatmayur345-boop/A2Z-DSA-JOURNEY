#include <iostream>
using namespace std;

int main() {
    int arr[5]; 
    for(int i=0;i<5;i++){
      cin>>arr[i];
    }
  cout<<"Enter index for number: ";
    int num;
    cin>>num;
  cout<<"The number at index "<<num <<" is: "<<arr[num];
}
