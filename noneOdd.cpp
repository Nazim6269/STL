#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {2,4,6,8,10,12};
    none_of(a,a+6,[](int x){return x%2 != 0;})?
    cout << "No EVEN elements" :
    cout << "There are ODD elements";
    return 0;


}
