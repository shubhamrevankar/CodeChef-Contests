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

    vector<ll> a(3),b(3);
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    ll aa = a[2]*100 + a[1]*10 + a[0];
    ll bb = b[2]*100 + b[1]*10 + b[0];

    if(aa>bb){
        cout<<"Alice"<<endl;
    }
    else if(aa<bb){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }



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