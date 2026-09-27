#include <bits/stdc++.h>
using namespace std;

bool ans = true;

bool Sum(int n, int i){
    if (n <= 1) {
        ans = false;
        return ans;
    }
    if(i * i <= n){
        if(n % i == 0){
            ans = false;
            return ans;
        }
        return Sum(n, i + 1);
    }
    return ans;
}

int main(){
    int num;
    cin >> num;
    bool final_ans = Sum(num, 2); 
    if(final_ans){
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
