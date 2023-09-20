#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M=1e9+7;
long long mod(long long x){
    return ((x%M + M)%M);
}
long long add(long long a, long long b){
    return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b){
    return mod(mod(a)*mod(b));
}


void solve(){

    ll n,h;
    cin>>n>>h;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    int res=0;

    sort(a.begin(),a.end(),greater<int>());

    for(int i=0;i<n;i++){
        if(a[i]>=h){
            res = a[i];
            break;
        }
        else{
            h -= a[i];
        }
    }

    cout<<res<<endl;


}






int main() {
	long long t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
	return 0;
}