#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n != 0){
            int rem = n%10;
            arr.push_back(rem);
            n = n/10;
        }
        sort(arr.begin(), arr.end());
        return arr[arr.size()-1] * arr[arr.size()-2];
    }
};

int main(){
  Solution sol;

  int n;
  cout<<"Enter your number: ";
  cin>>n;

  cout<<"you highest number or two digit is: "<<sol.maxProduct(n);
}