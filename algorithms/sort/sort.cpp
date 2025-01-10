/*
sort() is a built-in function in C++ which sorts array and vectors in desired order. Keep in mind that sort() only be used to sort
data structures which has random access to its elements.
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * @param first - Iterator to the beginning of the range to be sorted
 * @param last - Iterator to the element just after the end of the range
 * @param comp - (optional) Binary function, function, lambda expression to compare two elements in the range
 */

void sortAscending() {
    int array[5] = { 1, 7, 2, 9, 3 };
    int length = sizeof(array) / sizeof(array[0]);

    sort(array, array + length);

    for (int number: array) {
        cout << number << " ";
    }
    cout << endl;
}

// Function to compare elements to sort
bool comp(int a, int b) {
    return a > b;
}

void sortDescending() {
    int array[5] = { 1, 7, 2, 9, 3 };
    int length = sizeof(array) / sizeof(array[0]);

    sort(array, array + length, comp);

    for (int number: array) {
        cout << number << " ";
    }
    cout << endl;
}

// Sorting user-defined data type

typedef struct {
    int age;
    int course;
} student_t;

// Compare based on age and course fields;

bool compare(student_t a, student_t b) {
    return a.age < b.age && a.course < b.course;
}

void sortStudents() {
    student_t array[4] = {
        {20, 2},
        {22, 3},
        {19, 1},
        {21, 2}
    };

    int length = sizeof(array) / sizeof(array[0]);

    sort(array, array + length, compare);

    for (student_t student: array) {
        cout << student.age << " " << student.course << endl;
    }
}

int main() {
    sortAscending();
    sortDescending();

    sortStudents();

    return 0;
}