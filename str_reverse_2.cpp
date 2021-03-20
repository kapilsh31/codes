#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string s;
	getline(cin,s);
	int n=s.length();
	for(int i=0, j=n-1; i < n/2 ; i++, j--){
		char t= s[i];
		s[i]=s[j];
		s[j]=t;
	}
    cout<<"\n"<<s; 
    return 0;
}

