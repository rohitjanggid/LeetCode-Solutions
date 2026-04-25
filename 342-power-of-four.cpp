#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0){
            return 0;
        }
        while(n%4 == 0){
            n /= 4;
        }
        return n==1;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter your value: ";
    cin>>n;
    cout<<" Result: "<<sol.isPowerOfFour(n);
}