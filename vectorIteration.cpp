#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vector <int> :: iterator it;
    for(it = vec.begin();it != vec.end();it++){

        cout << *it << endl;
    }
    return 0;
}
