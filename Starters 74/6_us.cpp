#include <bits/stdc++.h>
using namespace std;
#define ll long long

//----------This gave TLE---------------///
// static bool comp(const pair<int,int> &a, const pair<int,int> &b){
//     return a.second<b.second;
// }


// void solve(){


// long long n;
// cin>>n;
// vector<long long> arr(n);
// for(auto &x:arr) cin>>x;

// vector<pair<long long,long long>> v;
// for (long long i = 0; i < n; i++){
//     for(long long j=i+1;j<n;j++){
//         if(arr[i] == arr[j]+1){
//             v.push_back({i,j});
//         }
//     }
// }
// long long res=0;
// n=v.size();
// sort(v.begin(),v.end(),comp);
// for(long long i=0;i<n-res;i++){
//     long long t = v[i].second;
//     long long c=1;
//     for(long long j=i+1;j<n;j++){
//             if(v[j].first<t && v[j].second>=t) c++;
//     }
//     res = max(res,c);
// }

// cout<<res<<endl;


// }


void  solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;

    unordered_map<ll,ll> pre,suf;

    for(auto x:a) suf[x]++;

    ll res=0;
    ll p=0;

    // The next element in the array will only change the previous value by its own karma only
    // that is it will increase the inversion if there are +1 elements in the back and vv

    for(int i=0;i<n;i++){
        p += suf[a[i]-1];
        p -= pre[a[i]+1];
        res = max(res,p);
        suf[a[i]]--;
        pre[a[i]]++;
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