#include <queue>
#include <iostream>

using namespace std;

void printDeque(deque<int> dq) {
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
