#include<iostream>
using namespace std;

int main(){
	int n, sum=0;
	cin>>n;
	cout<<"enter array element "<<endl;
	int a[n];
	for(int i=0;i<n; i++){
		cin>>a[i];
		if(a[i]> -1000 and a[i]<1000){
			sum=sum+a[i];
			if(sum > 0){
				cout<<"numbers are : "<<a[i]<<" "<<endl;
			}
			else
			break;
		}
		
		else{
	//	cout<<sum<<endl;
		break;
	}
	cout<<sum<<endl;
	
}
	
	
}
