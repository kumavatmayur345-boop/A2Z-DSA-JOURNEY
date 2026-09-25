#include <bits/stdc++.h>
using namespace std;

bool perfectNumber(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
        return true;
    } else{
        return false;
    }
}
int main() {
    int num;
    cin>>num;
    int ans;
    ans=perfectNumber(num);
    if(ans){
        cout<<"True";
    } else{
        cout<<"False";
    }
}
