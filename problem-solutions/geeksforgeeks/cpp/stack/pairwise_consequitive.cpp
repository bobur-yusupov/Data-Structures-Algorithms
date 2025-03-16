#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s)
{
    if (s.size() % 2 == 1) {
        s.pop();
    }
    
    while (!s.empty()) {
        int first_element = s.top();
        s.pop();
        int second_element = s.top();
        s.pop();
        
        if (abs(first_element - second_element) != 1) {
            return false;
        }
    }
    
    return true;
}