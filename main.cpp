#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <numeric>
#include <deque>
// #include <algorithm>
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
void task4(){
    int n; cin >> n; vector<double> v(n); for(auto& i : v){ cin >> i;}
    cout << "List: "; for(const auto& i : v){ cout << i << " ";}
    for_each(v.begin(), v.end(), [](double& x) { x *= 1.10;});
    cout << "\nIncreased: "; for(const auto& i : v){ cout << i << " ";} cout << "\n";
    auto mn = *min_element(v.begin(), v.end(), [](double i, double z) { return i<z; });
    auto mx = *max_element(v.begin(), v.end(), [](double i, double z) { return i<z; });
    cout << "min = " << mn << "\nmax = " << mx << "\n";

    double t; cin >> t;
    int c = count_if(v.begin(), v.end(), [t](double i) { return i >= t; }); cout  << ">=threshold: "<< c << "\n";
}

/**************** TASK 5 ****************/
class Person {
protected: string name;
public:
    Person(const str& n) : name(n) {}
    str getName() const { return name;}
};

class Student : public Person{
public: Student(const str& n) : Person(n) {}};

class Staff : public Person{
public: Staff(const str& n) : Person(n) {}};

void task5(){
    int n; cin >> n; deque<str> qq;
    for(int i=0; i<n; i++){
        str type, name; cin >> type >> name;
        if(type == "student"){ qq.push_back(name);}
        else if(type == "staff"){ qq.push_front(name);}
    }
    for(const auto& i : qq){ cout << i << "\n";}
}
/**************** TASK 5 ****************/

int main(){
    // task1();
    // task2();
    // task3();
    // task4();
    task5();
    return 0;
}

// com.zuludesk.scripting
// 1077285.mdm.jamfschool.com