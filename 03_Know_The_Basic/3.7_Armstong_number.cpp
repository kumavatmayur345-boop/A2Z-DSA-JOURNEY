class Solution {
public:
    bool isArmstrong(int n) {
        int sum=0;
        int x=n;
        int lastdigit;
        while(n>0){
            lastdigit=n%10;
            n=n/10;
            sum=sum+pow(lastdigit,log10(x)+1);
        }
        if(sum==x){
            return true;
        } else{
            return false;
        }
        }
    }
};
