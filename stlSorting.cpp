#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,5,7,4,2,6,3,8,9,0};
    cout << "Size of Array : ";
    int asize = sizeof(a) / sizeof(a[0]);
    cout << asize << endl;

    cout << "Before sorting : ";
    for(int i=0;i<asize;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + asize);
    cout << "After sorting : " ;
    for(int i=0;i<asize;i++){
        cout << a[i] << " ";
    }
    return 0;
}
