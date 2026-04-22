#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        int ans = 0;
        while(n != 0){
            int remender = n%10;
            if (ans > (pow(2, 31)-1)/10  || ans < (pow(-2, 31))/10)  {
                ans = 0;
                break;
            }
            ans = (ans * 10) + remender;
            n = n/10;
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter your int value: ";
    cin>>n;
    cout<<"Result: "<<sol.reverse(n);

}