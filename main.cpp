#include <iostream>
#include <vector>
#include <algorithm>
#include <type_traits>

template <typename T>
T maximum(const std::vector<T>& vec) {
    std::vector<T> newVec = vec;
    std::sort(newVec.begin(), newVec.end());
    return newVec.at(newVec.size() - 1);
}
int main() {
    std::vector<int> ints = {4, 1, 2, 7, 23, 1, 90, 0};
    std::cout << maximum<int>(ints) << std::endl;
    return 0;
}