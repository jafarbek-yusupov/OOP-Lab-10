#include <iostream>
#include <vector>
using namespace std;

void task1() {
    int n; cin >> n; vector<int> v(n); for(int& i : v){ cin >> i;} int vv; cin >> vv;
    for(int& i : v){ if(i!=vv){ cout << i << " "; i=-1;}} cout << '\n';
}

int main(){
    // task1();
    return 0;
}