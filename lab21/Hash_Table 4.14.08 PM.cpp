#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> hashTable;
    hashTable["apple"] = 3;
    hashTable["banana"] = 2;
    hashTable["cherry"] = 5;

    for (auto pair : hashTable) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}