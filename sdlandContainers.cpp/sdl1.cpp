#include <iostream>
#include <vector>
using namespace std;

template <typename Container>

void print(const Container& container) {
    for (const auto& element : container) {
        cout << element << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums = {1, 2, 3};
    print(nums);
}
