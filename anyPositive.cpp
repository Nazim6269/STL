#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6] = {1,-2,3,4,5};
    any_of(a,a+5,[](int x){return x>0;})?
    cout << "There exists a negative number ":
    cout << "All are positives elements ";
    return 0;
}
