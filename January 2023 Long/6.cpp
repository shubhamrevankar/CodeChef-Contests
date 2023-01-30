#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long t;
	cin>>t;
	
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> arr(n);
	    for(long long i=0;i<n;i++){ cin>>arr[i];}
	    long long mx=arr[0];
	    long long sum=arr[0];
	    for(long long i=1;i<n;i++){
	        sum += arr[i];
	        if(arr[i]>mx && sum/(i+1)>=mx){
	            if(sum%(i+1)==0){
    	            //all arr to sum/(i+1)
    	            mx=sum/(i+1);
    	        }
    	        else{
    	            //all arr to sum/(i+1) and first sum%(i+1) elements ++
    	            mx=sum/(i+1)+1;
	            }
	        }
	        
	    }
	    cout<<mx<<endl;
	    
	}
	
	return 0;
}v