#include<bits/stdc++.h>
using namespace std;

int primeNumber( int n) {
        int ans=0;
        if(n>2){
          for(int i=2;i<=n;i++){
            int a=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    a++;
                  break;
                }
            }
            if(a==0){
                ans++;
            }
          }
        }
        else if(n==2) {return 1;
        }
        return ans;
	}
    int main(){
        int x;
        cin>>x;
        
        int ans=primeNumber(x);
        cout<<ans;
    }
