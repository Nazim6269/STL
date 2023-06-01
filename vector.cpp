#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec;
    vec.push_back(2); //v[0]
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout << vec.at(0);
    //to print size of vector
    cout << vec.size();
    //to print 0 index value
    cout << vec.front();
    //to print last index value
    cout << vec.back();
    //to clear vector
    vec.clear();
    //to delete last value
    vec.pop_back();
    //to erase definite value
    vec.erase(vec.begin()+0);
    //to erase 3 index to end
    vec.erase(vec.begin()+3,vec.end());
    //to insert value
    vec.insert(vec.begin()+2,2);


}
