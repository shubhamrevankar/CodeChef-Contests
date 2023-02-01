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

    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll zeros=0,ones=0;

    for(auto x:s){
        if(x=='0'){
            zeros++;
        }
        else{
            ones++;
        }
    }

    if(ones==0){
        cout<<"0"<<endl;
        return;
    }

    if(zeros==0){
        cout<<"1"<<endl;
        return;
    }

    ll res = min(ones,zeros+1);

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