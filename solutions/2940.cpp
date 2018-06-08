#include <iostream>
#include <cmath>
#include <stdlib.h>     /* labs */
using namespace std;
//n*((2*n+1)%2); 
int main(){
    int v, t, s;
    cin >> v >> t;
    s = (v * t) % 109;
    cout << (s + 109)%109;
    return 0;
}