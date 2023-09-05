#include <vector>
#include <set>
#include <iostream>

using namespace std;

int stray(std::vector<int> numbers) {
    set<int> setNumbers(numbers.begin(), numbers.end());
    int c = count(numbers.begin(), numbers.end(), *setNumbers.begin());
    if (c == 1) {
        return *setNumbers.begin();
    }
    else {
        return *(--setNumbers.end());
    }
};

int main() {
    vector<int> vec{1, 1, 1, 1, 2};
    cout << stray(vec);
}