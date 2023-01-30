#include <bits/stdc++.h>
using namespace std;


static bool comp (const vector<int> &a, const vector<int> &b){
    if(a[0]==b[0]) return a[1]>b[1];
    return a[0]>b[0];
}


void solve(){


int n;
cin>>n;
vector<vector<int>> v(n);

for(int i=0;i<n;i++){
    int t;
    cin>>t;
    v[i].push_back(t);
}
for(int i=0;i<n;i++){
    int t;
    cin>>t;
    v[i].push_back(t);
    v[i].push_back(i);
}
sort(v.begin(),v.end(),comp);

cout<<(v[0][2]+1)<<endl;

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