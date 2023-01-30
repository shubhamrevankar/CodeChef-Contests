#include <bits/stdc++.h>
using namespace std;


static bool comp(const pair<int,int> &a, const pair<int,int> &b){
    return a.second<b.second;
}


void solve(){


long long n;
cin>>n;
vector<long long> arr(n);
for(auto &x:arr) cin>>x;

vector<pair<long long,long long>> v;
for (long long i = 0; i < n; i++){
    for(long long j=i+1;j<n;j++){
        if(arr[i] == arr[j]+1){
            v.push_back({i,j});
        }
    }
}
long long res=0;
n=v.size();
sort(v.begin(),v.end(),comp);
for(long long i=0;i<n-res;i++){
    long long t = v[i].second;
    long long c=1;
    for(long long j=i+1;j<n;j++){
            if(v[j].first<t && v[j].second>=t) c++;
    }
    res = max(res,c);
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