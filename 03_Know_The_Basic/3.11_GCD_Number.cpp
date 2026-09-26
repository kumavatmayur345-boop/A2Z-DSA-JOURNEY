#include <bits/stdc++.h>
using namespace std;
int gcdNumber(int x,int y){
    int ans=0;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans;
    ans=gcdNumber(a,b);
    cout<<ans;
}
