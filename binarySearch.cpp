#include<bits/stdc++.h>
using namespace std;

 int binarysearch(int a[], int asize, int x){
    int left,right,mid;
    left = 0;
    right = asize - 1;
    while(left <= right){
        mid = (left + right)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
 }
int main (){
    int a[] = {20,30,40,50,60,70,80,90,100};
    int x ;
    cin >> x;
    int asize = sizeof(a) / sizeof(a[2]);
    int bin = binarysearch(a,asize,x) ;
    cout << bin << endl ;
    if( bin >= 0){
            cout << "find";
    }
    else cout << "not find";
    }

