#include <iostream>
#include <vector>
#include <cctype>

int main() {
    char arr[] = {'a', '1', 'b', '2', 'c', '3'};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::vector<char> letters;
    std::vector<char> digits;

    for (int i = 0; i < n; i++) {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            letters.push_back(arr[i]);
        } else if (arr[i] >= '0' && arr[i] <= '9') {
            digits.push_back(arr[i]);
        }
    }

    for (int i = 0; i < (int)letters.size(); i++) {
        std::cout << letters[i] << ' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < (int)digits.size(); i++) {
        std::cout << digits[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}