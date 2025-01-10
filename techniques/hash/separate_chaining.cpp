/*

In hash data structure collisions can be observed very often. For example we are given 2, 12, 22. We need to hash them in to
a table which has keys from 0 to 9. When we take their mod by 10 we get 2 as they should map to key 2. Fortunately we have linked list
data structure to store values with the same hash.

*/

/*

Load factor = (total number of elements in a hash table) / (number of slots in a hash table)

*/

#include <iostream>
#include <unordered_map>

double load_factor(std::unordered_map<int, std::string> hashTable) {
    size_t numberOfElements = hashTable.size();
    size_t numberOfBuckets = hashTable.bucket_count();

    double loadFactor = static_cast<double>(numberOfElements) / numberOfBuckets;

    return loadFactor;
}

int main() {
    std::unordered_map<int, std::string> hashTableFruits;

    hashTableFruits[0] = "Apple";
    hashTableFruits[1] = "Banana";
    hashTableFruits[2] = "Orange";
    hashTableFruits[3] = "Grape";
    hashTableFruits[4] = "Cherry";
    hashTableFruits[5] = "Appricot";
    hashTableFruits[6] = "Apple";
    hashTableFruits[7] = "Banana";
    hashTableFruits[8] = "Appricot";
    hashTableFruits[9] = "Appricot";
    hashTableFruits[10] = "Appricot";

    std::cout << load_factor(hashTableFruits) << std::endl;

    std::cout << "Bucket count: " << hashTableFruits.bucket_count() << std::endl;
    std::cout << "Hash table size: " << hashTableFruits.size() << std::endl;


    return 0;
}