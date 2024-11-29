#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> A(n);
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());
    A.erase(std::unique(A.begin(), A.end()), A.end());

    for (int i = 0; i < A.size(); i++) {
        std::cout << A[i] << " ";
    }

    return 0;
}