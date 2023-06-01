#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {-1,-2,-3,4,-6};
    any_of(a,a+5,[](int x){return x<0;})?
    cout << "There exits a positive element ":
    cout << "All are Negative ";
    return 0;
}
