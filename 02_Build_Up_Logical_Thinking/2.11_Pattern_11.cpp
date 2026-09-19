#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            for(int j=0;j<i;j++){
                cout<<j%2<<" ";
            }
        } else {
            for(int j=1;j<=i;j++){
                cout<<j%2<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
//Time complexity =O(N^2)
