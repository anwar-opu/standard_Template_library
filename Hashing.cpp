#include<bits/stdc++.h>

using namespace std;
const int N  = 10e+7;
int hsh[N];

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x];
    }

}