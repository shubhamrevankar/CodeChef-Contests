#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> A(2*n);
	    for(int i=0;i<n;i++) cin>>A[i];
	    for(int i=n;i<2*n;i++) cin>>A[i];
	    sort(A.begin(),A.end());
	    int mn=INT_MAX;
	    for(int i=0;i<=n;i++){
	        mn = min(mn,A[i+n-1]-A[i]);
	    }
	    cout<<mn<<endl;
	}
	return 0;
}