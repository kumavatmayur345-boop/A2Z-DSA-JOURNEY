#include <bits/stdc++.h>
using namespace std;
int Factorial(int n){
    if(n==0){
        return 1;
    }
    return n*Factorial(n-1);
}
int main(){
    int num;
    cin>>num;
    int ans=Factorial(num);
    cout<<ans;
}
