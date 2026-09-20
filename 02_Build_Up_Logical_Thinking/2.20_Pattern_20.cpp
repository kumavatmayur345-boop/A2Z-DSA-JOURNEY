#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=num-1;j>i;j--){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=num-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=num-1;j>=i;j--){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
