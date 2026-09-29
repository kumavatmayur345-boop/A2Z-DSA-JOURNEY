#include <bits/stdc++.h>
using namespace std;
bool S(const string&s,int l,int r){
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return S(s,l+1,r-1);
}
int main(){
    string s;
    cin>>s;
    if(S(s,0,s.size()-1)){
        cout<<"True";
    } else{
        cout<<"False";
    }
}
