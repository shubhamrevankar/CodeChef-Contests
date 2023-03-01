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


void solve(ll n, ll m, ll q){

    m--;
    ll h=1;
    while(((h*(h+1))/2)<=q && h<=n){
        h++;
    }
    h--;

    vector<ll> v(h+1,1);

    q -= ((h*(h+1))/2);

    for(ll i=h;i>0 && q>0;i--){
        if(q>(m*i)){
            v[i] += m;
            q -= (m*i);
        }
        else{
            ll d = q/i;
            ll r = q%i;
            v[i] += d;
            q = r;
        }
    }

    cout<<"1 "<<h<<endl;
    for(int i=1;i<=h;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;



}






int main() {
	
    ll n,m,nq;
    cin>>n>>m>>nq;

    vector<ll> v(nq);
    for(int i=0;i<nq;i++){
        cin>>v[i];
    }

    for(int i=0;i<nq;i++){
        solve(n,m,v[i]);
    }
    
	return 0;
}