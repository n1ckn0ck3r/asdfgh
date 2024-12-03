#include <iostream>
#include <vector>
#include <algorithm>
#include <type_traits>
#include <limits>

template <typename T>
T minimum(const std::vector<T>& vec) {
    std::vector<T> newVec = vec;
    std::sort(newVec.begin(), newVec.end());
    return newVec.at(0);
}
int main() {  
    int n;
    while (!(std::cin >> n) || n <= 1) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::vector<int> ints;
    for (int i = 0; i < n; i++) {
        int m;
        while (!(std::cin >> m)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        ints.push_back(m);
    }
    std::cout << minimum<int>(ints) << std::endl;
    return 0;
}