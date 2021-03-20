#include <iostream>
using namespace std;

bool result(int n){
	int i;
    if(n==1) 
	return false;
    else if(n>=2){
        for(i=2;i*i<=n;i++)
        if(n%i==0) 
		return false;
    }
    else{
        return true;
    }
}
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int n;
    cin>>n;
    if(result(n)){
    	cout<<"yes";
	}
	else{
		cout<<"false";
	}
    return 0;
}
