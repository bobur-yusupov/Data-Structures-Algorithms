/*

Given an integer array arr[], print all distinct elements from this array.
The given array may contain duplicates and the output should contain every element only once.

Time complexity: O(n)
Space complexity: O(n)

*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

std::vector<int> removeDuplicate(std::vector<int> &arr)
{
    std::unordered_set<int> integerSet;
    int index = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (integerSet.find(arr[i]) == integerSet.end())
        {
            integerSet.insert(arr[i]);
            arr[index] = arr[i];
            index++;
        }
    }

    arr.resize(index);

    return arr;
}

int main()
{
    std::vector<int> arrayOfIntegers = {1, 8, 7, 8};

    std::unordered_map<int, int> mapOfUniqueElements;

    for (int integerElement : arrayOfIntegers)
    {
        mapOfUniqueElements[integerElement]++;
    }

    for (const auto &pair : mapOfUniqueElements)
    {
        std::cout << pair.first << " ";
    }

    std::cout << std::endl;
}