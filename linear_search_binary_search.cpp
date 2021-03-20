#include<iostream>
using namespace std;

int linear_search(int a[], int n, int key){
	int i;
	for( i=0; i<n; i++){
		if(a[i] == key){
			return i ;
		}
}

}

int binary_search(int a[], int n, int key){
	int l=0;
	int h = n;
	int mid;
	
	while(l<=h){
		mid=(l+h)/2;
		if(key==a[mid]){
			return mid;
		}
		else if(key > a[mid]){
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}
}
int main(){
	int n, key;
	cin>>n;
	cout<<"enter array element "<<endl;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	cout<<endl;
	cout<<"enter key : ";
	cin>>key;
	cout<<endl;
	cout<<linear_search(a,n,key);
	cout<<endl;
	cout<<binary_search(a,n,key);
}
	
	
	
