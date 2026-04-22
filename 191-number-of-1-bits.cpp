#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int sum = 0;
        while(n != 0){
            int remender = n%2;
            sum += remender;
            n = n/2;
        }
        return sum;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"enter the n value: ";
    cin>>n;
    cout<<"Result "<< sol.hammingWeight(n)<< endl;
}