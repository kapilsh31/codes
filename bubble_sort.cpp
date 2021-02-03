#include<iostream>
using namespace std;

void bubble(int a[], int n){
	int i , j, flag;
	for(i=0; i<n; i++){
		flag=0;
		for(j=0; j<n-1-i; j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			flag=1;
		}
		if(flag == 0){
			break;
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
	bubble(a,n);
	
}
