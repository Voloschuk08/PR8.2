#include <iostream>
#include <string>
using namespace std;

// Функція, яка знаходить максимальну кількість послідовних пробілів у рядку
size_t MaxConsecutiveSpaces(const string& s) {
    size_t maxCount = 0;
    size_t currentCount = 0;

    for (char ch : s) {
        if (ch == ' ') {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        }
        else {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // Виклик функції для обчислення максимальної кількості послідовних пробілів
    size_t maxSpaces = MaxConsecutiveSpaces(str);
    cout << "Maximum consecutive spaces: " << maxSpaces << endl;

    return 0;
}
