#include<iostream>
using namespace std;

int main(){
	int R,C;
	cin>>R>>C;
	int a[R][C];
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<"enter key "<<endl;
	int key;
	cin>>key;
	cout<<endl;
	
	int i=0,j=C-1;
	while(i<R && j>=0){
		if(a[i][j]==key){
			cout<<i<<" "<<j<<endl;
			break;
		}
		else if(a[i][j] > key){
			j--;
		}
		else{
			i++;
		}
	}
}
