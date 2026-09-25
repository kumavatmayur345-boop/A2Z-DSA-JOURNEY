#include<bits/stdc++.h>
using namespace std;

int factorial( int n) {
        int ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*i;
        }
        return ans;
	}
    int main(){
        int x;
        cin>>x;
        
        int ans=factorial(x);
        cout<<ans;
    }
