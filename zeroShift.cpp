#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for(int i = n -1 ; i >=0; i--) {
        if(v[i] == 0) {
            v.erase(v.begin() + i);
            v.push_back(0);
        }
    }
    for(auto i : v) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}