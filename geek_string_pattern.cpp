#include<iostream>
using namespace std;




void follPatt(string s)
{
   //Your code here
   int c,d=0;
   for(int i=0; s[i] !='0'; i++){
       if(s[i] == 120){
           c++;
       }
       else if(s[i]== 121){
           d++;
       }
       
       break;
       
   }
   
   if(c==d) cout<<c<<endl;
   else cout<<0<<endl;
   
   
}

int main(){
	string s;
	cin>>s;
	follPatt(s);
	int n;
	cin>>n+4;
}
