#include <iostream>

int main() {
    int arr[] = { 8, 2, 7, 11, 15, 6, 4 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int requiredNumber = 8;
    int firstIndex = -1;
    int secondIndex = -1;
    bool isFound = false;

    for (int i = 0; i < arrSize; ++i) {
        if (isFound) break;
        if (arr[i] >= requiredNumber) continue;

        for (int j = i + 1; j < arrSize; ++j) {
            if (arr[j] >= requiredNumber) continue;
            int sum = arr[i] + arr[j];

            if (sum == requiredNumber) {
                firstIndex = i;
                secondIndex = j;

                isFound = true;
                break;
            }
        }
    }

    if (isFound) {
        printf("Required number:  %d\n", requiredNumber);
        printf("first value:      %d\n", arr[firstIndex]);
        printf("second value:     %d\n", arr[secondIndex]);
    } else {
        std::cout << "Values not found" << std::endl;
    }
}