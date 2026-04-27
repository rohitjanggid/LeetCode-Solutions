#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // frequency count ke liye vector banaya
        vector<int> countArr(nums.size() + 1, 0);
        for(int i = 0; i < nums.size(); i++){
            int number = nums[i];
            countArr[number]++;
        }

        vector<int> storeArr;
        for(int i = 0; i <= nums.size(); i++){
            if(countArr[i] == 2){
                storeArr.push_back(i);
            }
        }
        return storeArr;
    }
};

int main() {
    Solution sol;
    
    // Example Input
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    
    cout << "Input Array: ";
    for(int n : nums) cout << n << " ";
    cout << endl;

    // Function Call
    vector<int> duplicates = sol.findDuplicates(nums);

    // Result Output
    cout << "Duplicate Elements: ";
    if(duplicates.empty()) {
        cout << "None";
    } else {
        for(int x : duplicates) {
            cout << x << " ";
        }
    }
    cout << endl;

    return 0;
}