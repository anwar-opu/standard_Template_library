#include<bits/stdc++.h>
using namespace std;
int main(){

    pair<int, int>  p = {1,2};

    pair<int, string> p1 = make_pair(3, "abc");

    pair<string, string > p2 ={"abc", "def"};

    cout<< " int pair : ";
    cout<<p.first<<" "<<p.second<<endl;

    cout<< " int & string pair : ";
    cout<<p1.first<<" "<<p1.second<<endl;

    cout<< " string & string pair: ";
    cout<<p2.first<<" "<<p2.second<<endl;


}