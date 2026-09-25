#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    int lastdigit;
    int result=0;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        result=result*10+lastdigit;
    }
    return result;
}
int main() {
    int num;
    cin>>num;
    int ans;
    ans=reverseNumber(num);
    cout<<ans;
}
