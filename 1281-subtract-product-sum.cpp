#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        int rem;
        while(n > 0){
            rem = n % 10;
            n = n / 10;
            product *= rem;
            sum += rem;
        }
        return product - sum;
    }
};

int main() {
    Solution sol;
    int n ;
    cout<<"Enter the n value: ";
    cin>>n;
    cout << "Result: " << sol.subtractProductAndSum(n) << endl;
    return 0;
}