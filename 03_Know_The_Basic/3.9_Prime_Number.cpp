#include <bits/stdc++.h>
using namespace std;

bool primeNumber(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    cin>>num;
    bool ans;
    ans=primeNumber(num);
    if(ans){
        cout<<"True";
    } else{
        cout<<"False";
    }
}
