#include <bits/stdc++.h>
using namespace std;

stack<int> push(vector<int> &arr) {
    stack<int> stack;

    for (auto elem: arr) {
        stack.push(elem);
    }

    return stack;
}

/* _pop function to print elements of the stack
   remove as well
*/
void pop(stack<int> s) {
    while (s.size() > 0) {
        cout << s.top() << " ";
        s.pop();
    }
}