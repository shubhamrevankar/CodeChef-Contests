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

    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;

    ll odd=0,even=0;

    for(auto x:a){
        if(x%2==0) even++;
        else odd++;
    }

    if(odd==0 && x%2==0){
        cout<<"-1"<<endl;
        return;
    }

    if(odd==0){
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else{
            cout<<((n/2)+1)<<endl;
        }
        return;
    }


    if(even==0){
        cout<<"0"<<endl;
        return;
    }

    if(x%2==0){
        cout<<even<<endl;
    }
    else{
        if(even%2==0){
            cout<<even/2<<endl;
        }
        else{
            cout<<((even/2)+1)<<endl;
        }
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