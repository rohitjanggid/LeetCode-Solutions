#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0 || n < 0){
            return false;
        }
        while(n != 1){
            int remender = n%3;
            if(remender != 0){
                return false;
            }
            n = n /3 ;
        }
        return true;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter your value: ";
    cin>>n;
    cout<<"result: "<<sol.isPowerOfThree(n);
}