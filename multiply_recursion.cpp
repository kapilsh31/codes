#include <iostream>
using namespace std;

int product(int  n, int m){
    int pro=0;
    while(m>0){
        pro += n;
        m=m-1;
    }
    return pro;

}

int main() {
    int n,m;
    cin>>n>>m;
    cout<<product(n,m);
}
