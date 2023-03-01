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


ll spf(ll n) {
    if (n % 2 == 0) {
        return 2;
    }

    ll l = sqrt(n);
    for (ll i = 3; i <= l; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }

    if (n == 1) {
        return 1;
    } else {
        return n;
    }
}



void solve(){

    ll x,y;
    cin>>x>>y;

    if(y%2==1){
        y++;
    }


    if(x%2==0){
        ll diff = y-x;
        diff /= 2;
        cout<<diff<<endl;
        return;
    }

    ll s =spf(x);

    x += s;
    ll diff = y-x;
    diff /= 2;
    diff++;
    cout<<diff<<endl;




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