#include<bits/stdc++.h>
using namespace std;
void display (vector<int> &v) {
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

}


int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for (int i = 0; i < N ; i++) {
        int n;
        cin>> n;
        for (int j = 0; j < n ; ++j) {
           int x;
           cin>>x;
           v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++) {
        display(v[i]);
    }

}
