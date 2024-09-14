#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>

using namespace std;

void random(int arr[], int size); // Function prototype
void Maximum(int arr[], int size); // Function prototype

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));

    const int size = 7;
    int arr[size];

    cout << "Filling the array with random numbers" << endl;
    random(arr, size);

    Maximum(arr, size);
   for(int i = 0; i < size; i++) cout << *(arr+i) << ' ';
    return 0;
}

void random(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = -10 + rand() % (10 + 10 + 1);
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void Maximum(int arr[], int size) {
    int max = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
            index = i;
        }
    }
    cout << "Max number: " << max << endl;
    arr[index] = 0;
    
}
