#include<iostream>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll prod=1;
    for(int i=2;i<=n;i++){
        prod*=i;
    }
    cout<<prod<<'\n';
}