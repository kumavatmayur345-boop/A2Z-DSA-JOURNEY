#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
            if(i>0 && i<num-1){
            
            cout<<"*";
            
                for(int k=0;k<num-2;k++){
                    cout<<" ";
                }
            cout<<"*";
        }else{
            for(int j=0;j<num;j++){
                cout<<"*";
            }
        }
         cout<<endl;
    }
}
