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

class Compare {
    public:
       bool operator()(pair<ll,ll> a, pair<ll,ll> b){
           if(a.first==b.first){
               return a.second>b.second;
           }
           return a.first>b.first;
      }
};


void solve(){

    ll n,k;
    cin>>n>>k;
    
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a[i] = (i+1)*temp;
    }
    
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,Compare > p;

    for(auto &x:a){
        p.push({x,x});
    }

    for(int i=0;i<k;i++){
        pair<ll,ll> t;
        t = p.top();
        p.pop();
        t.first += t.second;
        p.push(t);
    }

    while(p.size()>0){
        cout<<p.top().first<<endl;
        p.pop();
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