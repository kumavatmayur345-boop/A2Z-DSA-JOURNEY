#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int ans=64;
        for(int j=0;j<=i;j++){
            cout<<char(ans+num+j-i);
        }
        cout<<endl;
    }
    return 0;
}
