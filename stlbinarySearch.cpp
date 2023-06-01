#include<bits/stdc++.h>
using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}


int main(){
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[4]);
    sort(a,a + asize);
    show(a,asize);
    cout << endl;
    if(binary_search(a, a + 10,2)){
        cout << "Element is present ";
    }
    else{
        cout << "Elements isn't present ";
    }
    return 0;
}
