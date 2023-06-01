#include<bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >> x;
    float y = x - (int)x;
    if(y == 0){
        cout << "int" << " " << x;
    }
    else{
        cout << "float" << " " << (int)x << " " << fixed <<setprecision(3) << y;
    }
    return 0;
}
