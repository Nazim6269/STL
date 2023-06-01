
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vector <int> vec1;
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.push_back(48);
    vec1.push_back(59);

    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    for(int i=0;i<vec1.size();i++){
        cout << vec1[i] << " ";
    }
    cout << endl;
    //to swap
    swap(vec,vec1);
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
}
