#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0){
            return 1;
        }
        int result = 0;
        int k = 0;
        while(n != 0){
            int bit = n%2;
            if (bit == 1){
                bit = 0;
            }else if(bit == 0){
                bit = 1;
            }

            if(bit == 1){
                int value = pow(2, k);
                result += value;
            }
            k++;
            n = n/2;
        }
        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout<<"Enter your interger value n : ";
    cin>>n;
    cout<<"Result : "<<sol.bitwiseComplement(n);
}