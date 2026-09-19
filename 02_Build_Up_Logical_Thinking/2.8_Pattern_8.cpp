#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=num;j>num-i;j--){
            cout<<" ";
        }
        for(int j=num;j>i;j--){
            cout<<"*";
        }
        for(int j=0;j<num-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
