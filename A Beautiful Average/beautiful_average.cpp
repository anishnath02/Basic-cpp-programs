#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
	int n; cin>>n;
	vector<int> ar(n);
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}

	cout<<*max_element(ar.begin(), ar.end())<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t; cin>>t;
	while(t--){
		solve();
	}
}