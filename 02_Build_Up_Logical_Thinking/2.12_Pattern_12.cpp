#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=num*2-i*2;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<i-j;
        }
        cout<<endl;
    }
    return 0;
}
