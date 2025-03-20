#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <numeric>
#include <algorithm>
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

void task3() {
    list<double> lst;
    int n; cin >> n;
    list<double> tmpl(n);
    for(auto& i : tmpl) { cin >> i;}
    lst.assign(tmpl.begin(), tmpl.end());
    cout << "List: "; for(const auto& i : lst){ cout << i << " ";} cout << "\n";
    cout << "Reversed: "; for(auto it = lst.rbegin(); it != lst.rend(); it++){ cout << *it << " ";} cout << "\n";

    double sum = accumulate(lst.begin(), lst.end(), 0.0); double avg = sum / lst.size();
    cout << "Average=" << avg << "\n"; lst.remove_if([avg](double i) { return i < avg; });
    cout << "After removing: ";
    for(const auto& i : lst){ cout << i << " ";} cout << "\n";
    lst.sort(); cout << "Sorted: ";
    for(const auto& i : lst){ cout << i << " ";} cout << "\n";
}

int main(){
    // task1();
    // task2();
    task3();
    return 0;
}

// com.zuludesk.scripting
// 1077285.mdm.jamfschool.com