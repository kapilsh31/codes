#include<iostream>
using namespace std;

void insertion(int a[], int n){
	int i , j, flag;
	for(i=0; i<n-1; i++){
		for(j=flag=i; j<n; j++){
			if(a[j]<a[flag]){
				flag=j;
			}
			int temp = a[flag];
			a[flag] = a[i];
			a[i] = temp;
		}
	}
	
	for(i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<endl;
	insertion(a,n);
	
}
