#include <bits/stdc++.h>
using namespace std;

bool palindromeNumber(int n){
    int lastdigit;
    int x=n;
    int result=0;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        result=result*10+lastdigit;
    }
    if(result==x){
        return true;
    }else{
        return false;
    }
}
int main() {
    int num;
    cin>>num;
    int ans;
    ans=palindromeNumber(num);
    if(ans){
        cout<<"True";
    } else{
        cout<<"False";
    }
}
