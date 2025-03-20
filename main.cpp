#include <iostream>
#include <vector>
#include <string>
#define str string
using namespace std;

void task1() {
    int n; cin >> n; vector<int> v(n); for(int& i : v){ cin >> i;} int vv; cin >> vv;
    for(int& i : v){ if(i!=vv){ cout << i << " "; i=-1;}} cout << '\n';
}

bool dgts(const str& w){ for(char i : w){ if(i >= '0' && i <= '9'){ return true;}} return false;}
void task2() {
    int n; cin >> n;
    cin.ignore(); vector<str> v(n); str w; for(int i=0; i<n; i++){ cin >> w; v.push_back(w);}
    auto it = remove_if(v.begin(), v.end(), dgts);
    v.erase(it, v.end());
    for(const str& i : v){ cout << i << " ";} cout << '\n';
}

int main(){
    // task1();
    task2();
    return 0;
}

// // com.zuludesk.scripting
// 1077285.mdm.jamfschool.com