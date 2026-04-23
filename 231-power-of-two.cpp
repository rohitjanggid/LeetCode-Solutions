#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0){
            return false;
        }else if(n < 0){
            return false;
        }
        while(n != 1){
            int remender = n%2; 
            if(remender == 1){
                return false;
            }
            n = n/2;
        }
        return true;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter your value: ";
    cin>>n;
    cout<<"Result: "<<sol.isPowerOfTwo(n);
}