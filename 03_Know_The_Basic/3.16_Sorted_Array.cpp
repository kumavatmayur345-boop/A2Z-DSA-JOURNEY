#include <bits/stdc++.h>
using namespace std;

bool sortedArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i+1]<arr[i]){
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    bool ans;
    ans=sortedArray(arr, num);
    if(ans){
        cout<<"True";
    } else{
        cout<<"False";
    }
}
