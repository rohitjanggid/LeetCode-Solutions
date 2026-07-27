#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        return (nums[n]-1) * (nums[n-1]-1);
    }
};

int main(){
  Solution sol;

  vector<int> arr = {3,4,5,2};

  cout<<sol.maxProduct(arr);
}