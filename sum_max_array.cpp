#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n){
    int c_s=a[0] , m_s=a[0];
    for(int i=1;i<n;i++){
        c_s = max(c_s+a[i],a[i]);
        
        m_s=max(c_s,m_s);
        
    }
    return m_s;

 
}




int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<sum(a,n);
}

