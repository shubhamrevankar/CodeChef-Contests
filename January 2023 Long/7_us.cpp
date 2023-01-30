#include <bits/stdc++.h>
using namespace std;
static bool comp(const pair<int,int> &a, const pair<int,int> &b){
    return a.first<b.first;
}
int main() {
    
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n),b(n);
        for(long long i=0;i<n;i++) cin>>a[i];
        for(long long i=0;i<n;i++) cin>>b[i];
        
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({a[i],i});
        }
        for(int i=0;i<n;i++){
            v.push_back({b[i],i});
        }
        sort(v.begin(),v.end(),comp);
        unordered_map<int,int> index;
        int res=INT_MAX;
        int l=0,h=0;
        index[v[0].second]++;
        while(h<2*n){
            while(index.size()<n && h<2*n-1){
                h++;
                index[v[h].second]++;
            }
            if(index.size()<n && h==2*n-1) break;
            res = min(res,v[h].first-v[l].first);
            if(index[v[l].second]==1){
                index.erase(v[l].second);
            }
            else{
                index[v[l].second]--;
            }
            
            l++;
        }
        cout<<res<<endl;
    }
	
	return 0;
}