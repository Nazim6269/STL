#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    list<int> :: iterator it;
    for(it = li.begin(); it!=li.end();it++){
        cout << *it << " ";
    }
    cout << endl;

}
