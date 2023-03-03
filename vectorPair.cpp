#include<bits/stdc++.h>
using namespace std;
void display(vector<pair<int,int>> &v_p){

    for (auto value : v_p) {
        cout<< value.first <<" "<< value.second<<endl;
    }
}

int main (){
    int n;

    vector<pair<int,int>> v_p;
    cin>>n;
    for (int i=0 ; i<n ; i++) {
        int x,y;
       cin>>x >> y;
       //input pair :
       v_p.emplace_back(x,y); // v_p.push_back({x,y});

    }

    display(v_p);
}
