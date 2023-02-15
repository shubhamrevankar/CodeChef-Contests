#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;

    ll d=0;
    
    priority_queue<ll> pq;
    

    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            d += abs(a[i]-a[n-1-i]);
            pq.push(abs(a[i]-a[n-1-i]));
        }
    }
    
    if(d!=0 && k==n){
        cout<<"NO"<<endl;
        return;
    }
    if(k%2==1 || n%2==1){
        cout<<"YES"<<endl;
        return;
    }
    
    while(pq.size()>1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        if(x!=y){
            pq.push(x-y);
        }
    }
    
    if(pq.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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