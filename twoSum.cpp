#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int moreNeed = target - num;
        if (mpp.find(moreNeed) != mpp.end())
            return {mpp[moreNeed], i};
        mpp[num] = i;
    }
    return {-1, -1};
}

int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int target; 
    cin>>target;
    vector<int> result = twoSum(arr, target);
    
    if (result[0] == -1)
        cout << "No pair found!" << endl;
    else
        cout << "Indices: " << result[0] << " and " << result[1] << endl
             << "Numbers: " << arr[result[0]] << " + " << arr[result[1]]
             << " = " << target << endl;
    
    return 0;
}
