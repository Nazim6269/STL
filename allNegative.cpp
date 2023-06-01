#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[7] = {1,-2,-3,-4,-4,-5,7};
    all_of(a,a+7,[](int x){return x<0;})?
    cout << "All are negative ":
    cout << "All are not negative";
    return 0;

}
