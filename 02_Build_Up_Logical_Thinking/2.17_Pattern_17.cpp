#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int ans='A';
        for(int j=num;j>i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<char(ans);
            ans++;
        }
        for(int j=1;j<i;j++){
            cout<<char(ans-j-1);
        }
        cout<<endl;
    }
    return 0;
}
