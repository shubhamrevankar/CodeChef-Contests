#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){

    vector<ll> v(3);
    cin>>v[0]>>v[1]>>v[2];

    sort(v.begin(),v.end());

    if((v[1]-v[0])%2==0 && (v[2]-v[0])%2==0){
        cout<<(((v[1]-v[0])/2) + ((v[2]-v[0])/2))<<endl;
    }
    else{
        cout<<"-1"<<endl;
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