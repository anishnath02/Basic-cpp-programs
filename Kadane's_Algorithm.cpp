#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxi = INT_MIN;
    int sum = 0;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        sum += nums[i];
        maxi = max(maxi, sum);

        if(sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum Subarray Sum = " << maxSubArray(nums) << endl;

    return 0;
}
