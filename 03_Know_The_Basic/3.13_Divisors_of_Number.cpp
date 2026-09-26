#include<bits/stdc++.h>
using namespace std;
vector<int> count(int n) {
    vector<int> v;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            v.push_back(i);
        }
    } return v;
}
int main(){
    int x;
    cin>>x;
    vector<int> v=count(x);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
