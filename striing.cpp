#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	for(int i=0 ; s[i] != '\0'; i++){
		if(s[i]==95){
			s[i+1]=toupper(s[i+1]);
		}
			
		
	}
	
	for(int i=0 ; s[i] != '\0'; i++){
		
		if( s[i]>=64 and s[i]<=90){
			s.append("_");
			s[i]=tolower(s[i]);
		}
			
		
	}
	cout<<s;
}
