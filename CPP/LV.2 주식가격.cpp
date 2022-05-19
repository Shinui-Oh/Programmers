#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> v(prices.size());
    
    stack<int> s;
    
    int size = prices.size();
    
    for(int i = 0; i < size; ++i) {
        while(!s.empty() && prices[s.top()] > prices[i]) {
            v[s.top()] = i - s.top();
            
            s.pop();
        }
        
        s.push(i);
    }
    
    while(!s.empty()) {
        v[s.top()] = size - 1 - s.top();
        
        s.pop();
    }
    
    return v;
}