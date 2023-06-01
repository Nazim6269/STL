#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {1,2,3,4,-6};
    all_of(a,a+6,[](int x){return x>0;})?
    cout << "All are positive elements ":
    cout << "All are not positive elements ";
    return 0;

}
