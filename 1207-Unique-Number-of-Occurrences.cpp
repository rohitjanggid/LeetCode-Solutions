#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int countArr[2001] = {0};
        for(int i=0; i<arr.size(); i++){
            int number = arr[i];
            countArr[number + 1000]++;
        }
        int currentArr = 0;
        for(int i = 0; i<2001;i++){
            if(countArr[i] > 0){
                currentArr = countArr[i];
                for(int j= i+1; j<=2000;j++){
                    if(countArr[j] == currentArr){
                        return false;
                    }
                }
            }
        }
        return true;

    }
};

int main(){
    Solution sol;
    vector<int> arr = {2, 4, 5, 4, 5, 5, 4};
    
    if(sol.uniqueOccurrences(arr)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}