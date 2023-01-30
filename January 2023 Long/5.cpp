#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> P(2*n);
	    
	    for(long long i=0;i<2*n;i++) cin>>P[i];
	    
	    for(long long i=0;i<2*n;i++){
	        if(P[i]>n) P[i] = 1;
	        else P[i] = 0;
	    }
	    
	    long long swaps=0;
	    long long j=2*n-1;
	    for(long long i=2*n-1;i>=0;i--){
	        if(P[i]==1){
	            swaps += (j-i);
	            j--;
	        }
	    }
	    
	    cout<<swaps<<endl;
	}
	return 0;
}