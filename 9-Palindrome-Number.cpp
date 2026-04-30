#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int ans = 0;
        int n = x;
            while(n != 0){
            int remender = n%10;
            if(ans < INT_MAX/10 && ans> INT_MIN/10){
                ans = (ans * 10) + remender;
            }
            else{
                return false;
            }
            n = n/10;
            } 
       if(ans == x){
        return true;
       }
       else{
        return false;
       }
    }
};


int main(){
    Solution sol;
    int x;
    cin>>x;
    cout<<"Result: "<<sol.isPalindrome(x);
}