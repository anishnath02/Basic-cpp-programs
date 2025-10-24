#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k, int n) {
    // We are using sliding window (two-pointer) approach to solve this problem , Time complexity = O(n)

    int l=0, r=0;
    long long sum = 0;
    int ans = 0;

    while(r < n){

        sum += a[r];

        while(l <= r && sum > k){
            sum -= a[l];
            l++;
        }

        if(sum == k){
            ans = max(ans, r-l+1);
        }

        r++;
    }

    return ans;
}

signed main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<longestSubarrayWithSumK(arr, k, n)<<endl;
}

