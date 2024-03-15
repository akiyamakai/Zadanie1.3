#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE] = { 5, 2, 8, 1, 9 };
    int target = 8;

    bool found = false;


    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }


    if (found) {
        std::cout << "Element " << target << " found in array." << std::endl;
    }
    else {
        std::cout << "Elemnt " << target << "not found in array." << std::endl;
    }

    return 0;
}
