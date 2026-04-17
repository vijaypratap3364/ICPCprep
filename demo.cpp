#include <bits/stdc++.h>
using namespace std;

auto recursion(int a) {
    if (a <= 1){
        return a;
    }
    return recursion(a-1)+ recursion(a-2); 
} 

int main() {
    int n;
    cin >> n;
    cout << recursion(n);
     

    return 0;
}