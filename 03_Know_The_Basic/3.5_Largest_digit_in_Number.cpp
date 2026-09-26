#include<bits/stdc++.h>
using namespace std;

int largestDigit(int n) {
    int lastdigit;
    int ans=0;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        if(lastdigit>ans){
            ans=lastdigit;
        }
    } return ans;
}
  int main(){
    int x;
      cin>>x;
        
    int ans=LargestDigit(x);
        cout<<ans;
  }
