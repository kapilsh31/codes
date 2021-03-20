#include<iostream>
using namespace std;

int main(){
	int n=0,v=0,c=0;
	string s;
	getline(cin,s);
	
	for(int i=0; s[i] != '\0'; i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			v++;
		}
		else if(s[i]>= '0' and s[i] <= '9'){
			n++;
		}
		else{
			c++;
		}
		}
		
		cout<<"vow "<<v<<endl;
		cout<<"digit "<<n<<endl;
		cout<<"const "<<c<<endl;
	}

