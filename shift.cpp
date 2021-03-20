#include<bits/stdc++.h>
using namespace std;

void shift(char *a, int k){
	int i = strlen(a);
	while(i>=0){
		a[i+k]=a[i];
		i--;
	}
	i = strlen(a);
	int j = i-k;
	int s =0;
	while(j<i){
		a[s]=a[j];
		j++;
		s++;
	}
	a[i-k]='\0';
}

int main(){
	int k;
	cin>>k;
	char a[]="hello";
	shift(a, k);
	cout<<a<<endl;
	
}
