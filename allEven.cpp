#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {1,2,3,4,-6};
    all_of(a,a+5,[](int x){return x%2 == 0;})?
    cout << "All are Even ":
    cout << "All are not Even ";
    return 0;
}
