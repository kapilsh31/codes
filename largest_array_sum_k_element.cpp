#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n, int k){
    int c_s=0;
    for(int i=0;i<k;i++){
        c_s += a[i];
    }

    int m_s=c_s;
    for(int j=0 ; j<n-k; j++){
        c_s += a[j+k]-a[j];
        m_s=max(c_s,m_s); 
    }

    return m_s;

 
}




int main() {
    int k,n;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<sum(a,n,k);
}

