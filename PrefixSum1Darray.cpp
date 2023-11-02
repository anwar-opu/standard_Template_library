#include<bits/stdc++.h>
using namespace std;
const int N = 10e5+10;
int arr[N];
int pf[N];
int main(){
    int n,q;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
        pf[i] = pf[i-1] + arr[i];
    }
    cin>>q;
    while(q--){
        int l,r;
        long long int sum =0;
        cin>>l>>r;
        cout<<pf[r] - pf[l-1]<<endl;
    }

}