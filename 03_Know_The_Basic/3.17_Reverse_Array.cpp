#include<bits/stdc++.h>
using namespace std;
vector<int> reverseArray(int arr[],int n){
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        v.push_back(arr[i]);
    } return v;
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    vector<int> v;
    v=reverseArray(arr,a);
    for(int i=0;i<a;i++){
    cout<<v[i]<<" ";
    }
}
