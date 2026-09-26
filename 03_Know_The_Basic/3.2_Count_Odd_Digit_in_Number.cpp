#include<bits/stdc++.h>
using namespace std;

int countOddDigit(int n) {
    int lastdigit;
    int ans=0;
    n=abs(n)
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        if(lastdigit%2!=0){
            ans++;
        }
    } return ans;
}
int main(){
    int x;
    cin>>x;
        
    int ans=countOddDigit( x);
        cout<<ans;
}
