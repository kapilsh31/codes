#include <iostream>
using namespace std;

int sum(int a[], int n){
    int min=0;
	for(int i =0; i<n; i++){
		for(int j=i; j<n; j++){
			int sum=0;
			for(int k=i; k<=j; k++){
				sum += a[k];
			}
			
			if(sum < min ){
		        min=sum;    
            }
           
    }
    
}

    return min;
}

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    cout<<sum(a,n);
	}

}
