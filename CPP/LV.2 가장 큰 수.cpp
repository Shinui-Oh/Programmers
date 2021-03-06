#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string ans = "";
    
    vector<string> v;
    
    for (auto i : numbers) {
        v.push_back(to_string(i));
    }
    
    sort(v.begin(), v.end(), check);
    
    if (v[0] == "0") return "0";
    
    for (auto i : v) {
        ans += i;
    }
    
    return ans;
}