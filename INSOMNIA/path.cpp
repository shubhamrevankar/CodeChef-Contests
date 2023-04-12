#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool res = true;


void dfs(int i,vector<vector<int>> &adj,vector<bool> &bad,int n,bool gotbad){


    if(i==n-1){
        if(gotbad){
            res = false;
        }
        return;
    }

    if(bad[i]==true){
        gotbad = true;
    }

    for(auto x:adj[i]){
        dfs(x,adj,bad,n,gotbad);
    }


}



void solve(){

    ll n,m;
    cin>>n>>m;
    res = true;

    vector<vector<int>> adj(n);

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        adj[a].push_back(b);
    }

    vector<bool> bad(n,false);

    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int a;
        cin>>a;
        a--;
        bad[a] = true;
    }

    if(bad[0]==true || bad[n-1]==true) {
        cout<<"NO"<<endl;
        return;
    }

    dfs(0,adj,bad,n,false);

    if(res){
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