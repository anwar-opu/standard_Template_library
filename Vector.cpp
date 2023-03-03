#include<bits/stdc++.h>

using namespace std;
void display(vector<int> &v){

    for(auto & value : v){
        cout<<value<<" ";
    }
    cout<<endl;
    //    for (int i = 0; i < v.size(); i++) {
    //        cout<<v[i]<<" ";
    //    }
}
void s_display(vector<string> &v_str){
    for (auto & i : v_str) {
        cout<< i << " ";
    }
    cout<< endl;
}

int main(){
    int n;

    vector<int> v;
    vector<string> v_str;

    cin>> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin>> x;
        v.push_back(x);     // element added
    }
    display(v); //call function

    cout<< "after the last element delete using pop function  : " <<endl;
    v.pop_back(); // element delete
    display(v);

    //string input :
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        v_str.push_back(s);
    }

    //call string display function :
    s_display(v_str);

    cout<< "after the last string  delete using pop function  : " <<endl;
    //call pop function :
    v_str.pop_back();
    s_display(v_str);

}