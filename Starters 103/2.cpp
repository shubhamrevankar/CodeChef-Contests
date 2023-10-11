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

    if(n==1){
        cout<<"8"<<endl;
        return;
    }

    ll end;

    if(n>=3)
    end = stoi(s.substr(n-3,3));
    else 
    end = stoi(s);

    ll rem = end%8;

    if(end%10 >= rem) {
        s[n-1] -= rem;
    }
    else {
        s[n-1] += (8-rem);
    }

    cout<<s<<endl;



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