#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr) {
    int idx = 0;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > arr[idx]) idx = i;
    }
    return idx;
}

int main() {
    int n;
    cin >> n; // size of array

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // array input
    }

    int peakIndex = findPeakElement(arr);
    cout << peakIndex << endl;

    return 0;
}
