#include <bits/stdc++.h>
using namespace std;

//Function to push an element into the stack.
void insert(stack<int> &s,int x)
{
    s.push(x);
}

//Function to remove top element from stack.
void remove(stack<int> &s)
{
    if (!s.empty()) {
        s.pop();
    }
    
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s)
{
    int x=s.top();
    cout<<x<<" "<<endl; 
}

//Function to search an element in the stack.
bool find(stack<int> s, int val)
{   
    stack<int> temp_stack;
    
    while (!s.empty()) {
        if (s.top() == val) {
            while (!temp_stack.empty()) {
                s.push(temp_stack.top());
                temp_stack.pop();
            }
            
            return true;
        }
        temp_stack.push(s.top());
        s.pop();
    }
    
    while(!temp_stack.empty()) {
        s.push(temp_stack.top());
        temp_stack.pop();
    }
    
    return false;
}