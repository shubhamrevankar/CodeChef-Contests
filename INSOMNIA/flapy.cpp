#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dfs(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp,int n,int m,int coins){

    int hasCoin = 0;

    if(dp[i][j]!=INT_MAX){
        return dp[i][j];
    }

    if(grid[i][j]==1){
        hasCoin = 1;
    }

    if(j>=m-1){
        return hasCoin;
    }

    int ans = -1;

    if(grid[i][j+1]!=-1){
        ans = max(ans,dfs(i,j+1,grid,dp,n,m,coins));
    }
    if(i-1>=0 && grid[i-1][j+1]!=-1){
        ans = max(ans,dfs(i-1,j+1,grid,dp,n,m,coins));
    }
    if(i+1<n && grid[i+1][j+1]!=-1){
        ans = max(ans,dfs(i+1,j+1,grid,dp,n,m,coins));
    }

    if(ans==-1){
        return dp[i][j]=ans;
    }

    return dp[i][j]=ans+hasCoin;

}


void solve(){

    ll n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m));
    vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
    int res=-1;

    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            if(c=='.'){
                grid[i][j] = 0;
            }
            else if(c=='#'){
                grid[i][j] = -1;
            }
            else if(c=='*'){
                grid[i][j] = 1;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(grid[i][0] != -1){
            res = max(res,dfs(i,0,grid,dp,n,m,0));
        }
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