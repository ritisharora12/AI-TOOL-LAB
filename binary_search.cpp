#include <iostream>
using namespace std;

int binarySearch(int numbers[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if (numbers[middle] == target) {
            return middle;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    cout << "Index: " << binarySearch(numbers, size, 40) << endl;
    cout << "Index: " << binarySearch(numbers, size, 25) << endl;

    return 0;
}